class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        if(pushed.size()==1){
            return true;
        }
        if(pushed==popped){
            return true;
        }
        int j=0;
        for(int i=0;i<pushed.size();i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top()==popped[j] && j<popped.size()){
                int x=s.top();
                s.pop();
                // cout<<x<<" ";
                j++;
            }
            
        }
        // cout<<s.top()<<" ";
        while(!s.empty() &&  s.top()==popped[j]){
            s.pop();
            j++;
        }
        return s.empty() && j == popped.size();
    }
};