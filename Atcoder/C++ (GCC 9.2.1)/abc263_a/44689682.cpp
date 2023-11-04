#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   vector<int> arr(5);
   for (int i = 0; i < 5; i++)
   {
      cin >> arr[i];
   }
   unordered_map<int, int> mp;
   for (auto i : arr)
   {
      mp[i]++;
   }
   if (mp.size() != 2)
   {
      cout << "No" << endl;
   }
   else{
      bool fullHouse = false;
      for (auto entry : mp) {
         if (entry.second == 3 || entry.second == 2) {
            fullHouse = true;
            break;
         }
      }
      if (fullHouse) {
         cout << "Yes" << endl;
      } else {
         cout << "No" << endl;
      }
   }
   return 0;
}
