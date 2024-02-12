class Solution {
public:
    bool isprime(int n){
        for(int i=2;i*i<=n;i++){
            
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int smallestValue(int n) {
        int cur=n;
        int ans=n;
        if(n==4){
            return 4;
        }
        while(!isprime(cur)){
                vector<int>primes;

                if(cur%2==0){
                    while(cur%2==0){
                        cur/=2;
                        primes.push_back(2);
                    }
                    
                }

                for(int i=3;i*i<=cur;i+=2){
                    if(cur%i==0){
                        while(cur%i==0){
                            cur/=i;
                            primes.push_back(i);
                        }
                        
                    }

                }
                if(cur>2){
                    primes.push_back(cur);
                }

                int sum=0;
                for(auto it:primes){
                    cout<<it<<" ";
                    sum+=it;
                }
                cout<<endl;


                if(cur==sum){
                    cout<<cur<<endl;
                    return sum;
                }
                cur=sum;
                ans=min({cur,ans});
                
        }
        return ans;
    }
};