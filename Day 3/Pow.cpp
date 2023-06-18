class Solution {
public:
    double myPow(double x, int n) {
        if(n==0||x==1){
            return 1;
        }
        double ans=1;
        if(n<0){
            x=1/x;
        }
        long m=abs(n);
        while(m){
            if(m&1){
                ans*=x;
            }
            x*=x;
            m=m>>1;
        }
        return ans;
    }
};