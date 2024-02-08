class Solution {
public:
    unordered_map<Node*, Node*> visited; 
    Node* cloneGraph(Node* node) {
        if (node == nullptr) return NULL; 
        
        if (visited.find(node) == visited.end()) {
            visited[node] = new Node(node->val);
            for (Node* neighbor : node->neighbors) {
                visited[node]->neighbors.push_back(cloneGraph(neighbor)); 
            }
        }
        
        return visited[node];
    }
};
