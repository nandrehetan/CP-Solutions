#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  vector<long long> a(n);
  for(auto &nx : a){cin >> nx;}
  sort(a.begin(),a.end());

  vector<long long> rw(n+1,0);
  for(long long i=0;i<n;i++){rw[i+1]=rw[i]+a[i];}

  for(int i=0;i<q;i++){
    long long x;
    cin >> x;
    int st=0,fi=n-1;
    while(st<=fi){
      int te=(st+fi)/2;
      if(a[te]<x){st=te+1;}
      else{fi=te-1;}
    }
    long long res=x*st;
    res-=rw[fi+1];
    res+=(rw[n]-rw[st]);
    res-=x*(n-st);
    cout << res << '\n';
  }
  return 0;
}
