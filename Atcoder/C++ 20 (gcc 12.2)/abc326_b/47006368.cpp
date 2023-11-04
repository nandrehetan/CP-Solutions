#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
const int mod=1e9+7;
const int INF = 1e9;
 
/*/---------------------------------------------------------------------------------------------------------/*/

struct custom_hash {
        static uint64_t splitmix64(uint64_t x) {
                // http://xorshift.di.unimi.it/splitmix64.c
                x += 0x9e3779b97f4a7c15;
                x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
                x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
                return x ^ (x >> 31);
        }
 
        size_t operator()(uint64_t x) const {
                static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
                return splitmix64(x + FIXED_RANDOM);
        }
};
  
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
istream& operator >> (istream &is, T_container &v) { 
        for(T &x : v) is >> x; return is;
}
#ifdef __SIZEOF_INT128__
ostream& operator << (ostream &os, __int128 const& value){
        static char buffer[64];
        int index = 0;
        __uint128_t T = (value < 0) ? (-(value + 1)) + __uint128_t(1) : value;
        if (value < 0) 
            os << '-';
        else if (T == 0)
            return os << '0';
        for(; T > 0; ++index){
            buffer[index] = static_cast<char>('0' + (T % 10));
            T /= 10;
        }    
        while(index > 0)
            os << buffer[--index];
        return os;
}
istream& operator >> (istream& is, __int128& T){
        static char buffer[64];
        is >> buffer;
        size_t len = strlen(buffer), index = 0;
        T = 0; int mul = 1;
        if (buffer[index] == '-')
            ++index, mul *= -1;
        for(; index < len; ++index)
            T = T * 10 + static_cast<int>(buffer[index] - '0');
        T *= mul;    
        return is;
}
#endif
 
template<typename A, typename B> 
ostream& operator<<(ostream &os, const pair<A, B> &p) { 
        return os << '(' << p.first << ", " << p.second << ')'; 
}
 
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
ostream& operator << (ostream &os, const T_container &v) { 
        os << '{'; string sep; 
        for (const T &x : v) os << sep << x, sep = ", "; 
        return os << '}'; 
}
template<class P, class Q = vector<P>, class R = less<P> > ostream& operator << (ostream& out, priority_queue<P, Q, R> const& M){
        static priority_queue<P, Q, R> U;
        U = M;
        out << "{ ";
        while(!U.empty())
                out << U.top() << " ", U.pop();
        return (out << "}");
 
}
template<class P> ostream& operator << (ostream& out, queue<P> const& M){
        static queue<P> U;
        U = M;
        out << "{"; string sep;
        while(!U.empty()){
                out << sep << U.front(); sep = ", "; U.pop();
        }
        return (out << "}");
}
 
 
#define TRACE
#ifdef TRACE
        #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
        template <typename Arg1>
        void __f(const char* name, Arg1&& arg1){
                cerr << name << " : " << arg1 << endl;
        }
        template <typename Arg1, typename... Args>
        void __f(const char* names, Arg1&& arg1, Args&&... args){
                int count_open = 0, len = 1;
                for(int k = 1; ; ++k){
                        char cur = *(names + k);
                        count_open += (cur == '(' ? 1 : (cur == ')' ? -1: 0));
                        if (cur == ',' && count_open == 0){
                               const char* comma = names + k;
                               cerr.write(names, len) << " : " << arg1 << " | ";
                               __f(comma + 1, args...);
                               return;
                        }
                        len = (cur == ' ' ? len : k + 1);
                }
        }
#else
        #define trace(...) 1
#endif
 
/* ----------------------------------------------------- GO DOWN ---------------------------------------------------------------------- */


void solve(){




        string s;
        cin>>s;

        int n=stoi(s);

        for(int i=n;i<=n*100;i++){
                string x=to_string(i);

                int a=x[0]-'0';
                int b=x[1]-'0';
                int c=x[2]-'0';
                // cout<<a<<" "<<b<<" "<<c<<endl;
                if(a*b==c) {
                        cout<<i<<endl;
                        return;
                }
        }


}

signed main(){

        
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        auto start1 = high_resolution_clock::now();

        int t;
        t=1;
        // cin >> t;
        // Hetu ka laptop
        
        while (t--) {
                solve();   
        }
        

        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);
        cerr << "Time: " << duration . count() / 1000 << " ms" << endl;
        return 0;

}