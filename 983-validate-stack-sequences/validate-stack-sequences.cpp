class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;

        if (pushed.size() == 1) {
            return pushed == popped;
        }

        int j = 0;
        for (int i = 0; i < pushed.size(); i++) {
            s.push(pushed[i]);
            while (!s.empty() && s.top() == popped[j] && j < popped.size()) {
                int x = s.top();
                s.pop();
                // cout << x << " ";  // Commented out printing for submission
                j++;
            }
        }

        // Check if there are remaining elements in the stack that need to be popped.
        while (!s.empty() && s.top() == popped[j] && j < popped.size()) {
            s.pop();
            j++;
        }

        return s.empty() && j == popped.size();
    }
};
