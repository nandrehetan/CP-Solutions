class Solution {
public:
    int maximumSwap(int num) {
        string a=to_string(num);
        string b=a;
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        char ch1,ch2;
        for(int i=0;i<b.size();i++){
            if(a[i]!=b[i]){
                ch1=a[i];
                ch2=b[i];
                break;
            }
        }
        int p=0;
        int q=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==ch1){
                p=i;
                break;
            }
        }
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]==ch2){
                q=i;
                break;
            }
        }
        swap(a[p],a[q]);
        int ans=stoi(a);
        return ans;
    }
};