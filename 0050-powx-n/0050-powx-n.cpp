class Solution {
public:
    double calculate(double x,long n){
        if(n==1){
            return x;
        }
        if(n == 0){
            return 1;
        }
        if(n%4 == 0){
            return calculate(x*x,n/4) * calculate(x*x,n/4);
        }
        if(n%2 == 0){
            return calculate(x*x,n/2);
        }
        else{
            return x*calculate(x,n-1);
        }

    }
    double myPow(double x, int n) {
        long N;
        if(n<0){
            N=-(long)n;
            return 1.0/calculate(x,N);
        }
        return calculate(x,n);
        
    }
};