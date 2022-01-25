class Solution {
public:
    double myPow(double x, int n) {
        long long int pow=n;
        if(pow==0)
        {
           return 1;
        }
        if(n<0)
        {
           pow= -pow;
         x = 1/x;
        }
       
        return (pow%2==0)? myPow(x*x,pow/2) : x*myPow(x,pow-1);
    }
};