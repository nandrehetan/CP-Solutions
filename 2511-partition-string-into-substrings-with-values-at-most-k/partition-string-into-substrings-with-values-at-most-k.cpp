class Solution {
public:
    int minimumPartition(string s, int k) {
        
        if(k<9){
            for(auto it:s){
                int n=it-'0';
                if(n>k){
                    return -1;
                }
            }
            return s.size();
        }
        if(k==9){
            return s.size();
        }
        
        string cnv=to_string(k);
        int n=s.size();
        int i=0;
        int ans=0;
        int j=0;
        while(i<n){
            string temp="";
            j=0;
            while(j<cnv.size() && i<n){
                temp+=s[i];
                i++;
                j++;
            }
            
            int temp2=stoi(temp);
            
            // cout<<temp<<" "<<temp2<<endl;
            if(temp2<=k){
                // i++;
                ans++;
            }else{
                i--;
                ans++;
            }
           
            
        }
        
        return ans;
        
    }
};