class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        vector<string>v;

        for(int i=0;i<(1<<n);i++){
            string s="";
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    s += '1';
                }else{
                    s += '0';
                }
            }
            v.push_back(s);
            // cout<<s<<endl;
        }

        sort(nums.begin(),nums.end());

        for(string it:v){
            // cout<<it<<endl;
            bool bs = binary_search(nums.begin(),nums.end(),it);

            if(!bs){
                return it;
            }
        }
        return "";
    }
};