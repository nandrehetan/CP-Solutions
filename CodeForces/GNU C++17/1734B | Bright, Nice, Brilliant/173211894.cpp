#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//Hetan Nandre
 
int mostFrequent(int *arr, int n) {
  // code here
  int maxcount=0;
  int element_having_max_freq;
  for(int i=0;i<n;i++)
  {
    int count=0;
    for(int j=0;j<n;j++)
    {
      if(arr[i] == arr[j])
        count++;
    }
 
    if(count>maxcount)
    {
      maxcount=count;
      element_having_max_freq = arr[i];
    }
     
  }
 
  return element_having_max_freq;
}
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    int test;
    cin >> test;
    while (test--)
    {
        int x;
        cin >> x;
        for (int a = 1; a <=x ; a++)
        {
            for (int y = 1; y <= a; y++)
            {
                if (y == 1 || y == a)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
                
            }
            cout << endl;
        }
        
    }
    
    
    
    return 0;
}