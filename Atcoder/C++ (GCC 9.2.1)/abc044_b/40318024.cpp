#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){cin>>v[i];}
  vector<int>a(n+1);
  a[0]=INT_MAX;
  for(int i=0;i<n-1;i++){
    a[i]=min(a[i],v[i]);
    a[i+1]=v[i];
  }
  int sum=0;
  for(auto gf: a){
    sum += gf;
  }
  cout<<sum<<endl;
}
int main(){
  int t = 1;
  while(t--){
    solve();
  }
}