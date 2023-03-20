// Author - Hetan Hemant Nandre
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
 
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
// using namespace __gnu_pbds;
using namespace std;
//Hetan Nandre's code 
 
 
 
// Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
 
// Constants 
#define INF 1e18
#define EPS 1e-9
#define MOD 1000000007
 
 
 
// Macros
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define pb push_back
#define MAX 50
#define MP make_pair
#define rep(i,s,e)   for(int i=s;i<e;i++)
#define repr(i,s,e)  for(int i=s;i>=e;i--)
typedef vector<int>vi;
 
 
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
   for (auto &it : v)
      cin >> it;
   return istream;
}
 
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
   for (auto &it : c)
      cout << it << " ";
   return ostream;
}
 
 
 
// Mathematical functions
int GCD(int a, int b)
{
   while (b)
   {
      a %= b;
      swap(a, b);
   }
   return a;
}
 
 
int GCD_extended(int a, int b, int &x, int &y)
{
   x = 1, y = 0;
   int x1 = 0, y1 = 1, a1 = a, b1 = b;
   while (b1)
   {
      int q = a1 / b1;
      tie(x, x1) = make_tuple(x1, x - q * x1);
      tie(y, y1) = make_tuple(y1, y - q * y1);
      tie(a1, b1) = make_tuple(b1, a1 - q * b1);
   }
   return a1;
}
 
 
int LCM(int a, int b)
{
   return ((ll)a * b) / GCD(a, b);
}
 
ll modpow(ll x, ll n, int m = MOD)
{
   if (x == 0 && n == 0)
      return 0; // undefined case
   ll res = 1;
   while (n > 0)
   {
        if (n % 2)
            res = (res * x) % m;
        x = (x * x) % m;
        n /= 2;
   }
   return res;
}
 
int modinv(int x, int m = MOD)
{
   return modpow(x, m - 2, m);
}
 
mt19937 rng;
int getRandomNumber(int l, int r)
{
   uniform_int_distribution<int> dist(l, r);
   return dist(rng);
}
 
 
ll binToDec(string s) { return bitset<64>(s).to_ullong(); }
string decToBin(ll a) { return bitset<64>(a).to_string(); }
 
 
int fact(ll n)
{
      if(n==0)
      return 1;
    ll res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
 
int nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
ll binarySearch(ll arr[], ll l, ll r, ll x)
{
    while (l <= r) {
        ll m = l + (r - l) / 2;
       
        if (arr[m] == x)
            return m; 
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
 
 
int maxSubArraySum(vector <int> a, int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 
int getMostFrequentNumber(int arr[], int n) {
   unordered_map<int, int> elements;
   for (int i = 0; i < n; i++) {
      elements[arr[i]]++;
   }
   int maxCount = 0, res = -1;
   for (auto i : elements) {
      if (maxCount < i.second) {
         res = i.first;
         maxCount = i.second;
      }
   }
   return res;
}
 
bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
 
void solve()
{
    // ll n;
    // cin >> n;
    // ll a[n];
    // ll cnt = 0;
    // rep(i, 0, n)
    // {
    //     cin >> a[i];
    //     if (a[i] < 0)
    //     {
    //         cnt++;
    //     }
    // }
 
    // vector<ll>v1;
    // vector<ll>v2;
    // vector<ll>v3;
    // rep(i, 0, n)
    // {
    //     if (a[i] < 0)
    //     {
    //         v1.push_back(a[i]);
    //         break;
    //     }
    // }
 
    // rep(i, 0, n)
    // {
    //     if (a[i] <=0 )
    //     {
    //         v3.push_back(a[i]);
    //     }
    //     else
    //     {
    //         v2.push_back(a[i]);
 
    //     }
    // }
    // rep(i, 0, n)
    // {
    //     if (a[i] > 0)
    //     {
    //         v2.push_back(a[i]);
    //     }
    // }
 
    // for(auto g:v1)
    // {
    //     cout << v1.size() << " "<<g << " ";
    // }
    // cout << endl;
    // for(auto g:v2)
    // {
    //     cout << v2.size() << " "<<g << " ";
    // }
    //     cout << endl;
 
 
    // for(auto g:v3)
    // {
    //     cout << v3.size() << " "<<g << " " ;
    // }
 
 
 
 
 
 
 
 
    
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
 
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        if (*it < 0)
        {
            cout << "1 " << *it << endl;
            arr.erase(it);
            break;
        }
    }
 
    bool found(false);
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        if (*it > 0)
        {
            found = true;
            cout << "1 " << *it << endl;
            arr.erase(it);
            break;
        }
    }
 
    if (!found)
    {
        cout << "2";
        int count = 0;
        for (vector<int>::iterator it = arr.begin(); count < 2;)
        {
            if (*it < 0)
            {
                cout << " " << *it;
                it = arr.erase(it);
                ++count;
            }
            else
            {
                ++it;
            }
        }
        cout << endl;
    }
 
    cout << arr.size();
    for (size_t i = 0; i < arr.size(); ++i)
    {
        cout << " " << arr[i];
    }
    cout << endl;
 
 
}
    
    
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   ll t;
   t=1;
   // cin >> t;
   while(t--)
   {
      solve();
   }
   
}