class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>temp=arr;
        arr.clear();
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0){
                arr.push_back(temp[i]);
                arr.push_back(temp[i]);
            }else{
                arr.push_back(temp[i]);
            }
        }
        while(arr.size()>temp.size()){
            arr.pop_back();
        }
    }
};