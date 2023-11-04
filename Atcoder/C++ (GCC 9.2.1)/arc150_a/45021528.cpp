
#include <bits/stdc++.h>
using namespace std;

int int_max = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        int ones_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (st[i] == '1')
            {
                ones_count++;
            }
        }
        int ans = 0, one = 0, zero = 0, question = 0;
        for (int i = 0; i < k; i++) // i is the starting index
        {
            if(st[i] == '1')
            {
                one++;
            }
            else if(st[i] == '0')
            {
                zero++;
            }
            else
            {
                question++;
            }
        }
        if(one == ones_count && zero == 0 && question == k - ones_count)
        {
            ans++;
        }
        for(int i = k; i < n; i++) // i is the ending index
        {
            if(st[i] == '1')
            {
                one++;
            }
            else if(st[i] == '0')
            {
                zero++;
            }
            else
            {
                question++;
            }
            if(st[i - k] == '1')
            {
                one--;
            }
            else if(st[i - k] == '0')
            {
                zero--;
            }
            else
            {
                question--;
            }
            if(one == ones_count && zero == 0 && question == k - ones_count)
            {
                ans++;
            }
        }
        if(ans == 1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
}
