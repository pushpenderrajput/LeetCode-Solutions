class Solution {
public:
    double calculatePow(double x, long n){
        if(n == 1)
        return x;
        if(n == 0) return 1;
        if(n%4 == 0){
            return calculatePow(x*x,n/4) * calculatePow(x*x, n/4);
        }
        if(n%2 == 0){
            return calculatePow(x*x,n/2);
        }
        else{
            return x * calculatePow(x,(n-1));
        }
    }
    double myPow(double x, int n) {
        double ans = 1;
        long N;
        if(n<0){
            N = -(long)n;
            return 1.0 / calculatePow(x,N);
        }
        return calculatePow(x,n);
        

        
    }
};