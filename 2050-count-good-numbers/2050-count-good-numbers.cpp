class Solution {
public:
    int mod = 1e9+7;
    long long power(long long x, long long n){
        if(n==0) return 1;
        if(n%2 == 0){
            return power((x*x)%mod, n/2);
        }
        else{
            return (x*power(x,n-1))%mod;
        }
    }
        
    int countGoodNumbers(long long n) {
        long long even = n/2 + n%2;
        long long odd = n/2;
        long long first = power(5,even);
        long long second = power(4,odd);
        return ((first)*(second))%mod;
        
    }
};