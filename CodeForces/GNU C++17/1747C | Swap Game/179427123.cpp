#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        if(v[0]==arr[0])
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
        
    }
    return 0;
}