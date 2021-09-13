/*
    pow(x,n); 
    binary exponentiation;
*/

#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        
        double ans = 1.0;
        bool neg = false;
        bool ex = false;
        double temp = x;
        if(n < 0){
            if(n == INT_MIN){
                ex = true;
                n++;
            }
            n *= -1;
            neg = true;
        }
        
        while(n > 0){
            if((n&1) == 1){
                ans = ans*x;
            }    
            x = x*x;
            n = n>>1;
        }
        
        if(neg){
            if(ex){
                ans = ans*temp;
            }
            
            ans = 1/ans;
        }
        
        return ans;
    }
};

int main(){
    double a;
    int n;
    cin>>a>>n;

    Solution sl;

    cout<<(sl.myPow(a,n));

    return 0;
}