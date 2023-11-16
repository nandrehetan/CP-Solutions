class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<(1<<n);i++){
            string s="";
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    s += '1';
                }else{
                    s += '0';
                }
            }
            bool bs = binary_search(nums.begin(),nums.end(),s);

            if(!bs){
                return s;
            }
            // cout<<s<<endl;
        }
        return "";
    }
};