#include<bits/stdc++.h>

using namespace std;

int main(){
  vector<long long> ans;
  for(int i=2;i<(1<<10);i++){
    long long x=0;
    for(int j=9;j>=0;j--){
      if(i&(1<<j)){
        x*=10;
        x+=j;
      }
    }
    ans.push_back(x);
  }
  sort(ans.begin(),ans.end());

  int k;
  cin >> k;
  cout << ans[k-1] << "\n";
  return 0;
}
