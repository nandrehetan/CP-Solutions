class Solution {
public:
    string largestOddNumber(string num) {
        int j=0;
        int n=num.size();
        for(int i=n-1;i>=0;i--){
            char ch = num[i];
            j++;
            // cout<<ch<<" ";
            int cur=ch-'0';
            // cout<<cur<<" ";
            if(cur%2==1){
                // cout<<cur<<endl;
                j=i;
                string s = "";
                for(int i=0;i<=j;i++){
                    s += num[i];
                }
                return s;
            }
        }
        
        // cout<<s<<endl;
        return "";
    }
};