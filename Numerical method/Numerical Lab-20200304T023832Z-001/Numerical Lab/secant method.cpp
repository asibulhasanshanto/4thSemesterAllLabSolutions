#include<bits/stdc++.h>
using namespace std;
class secant_method{
    public:
        double a=0,b=0,c;
        double f(double x){
            return x*x*x-x-1;
        }
        void check_a(){
            while(f(a)>=0){
                a = a - 1;
            }
        }
        void check_b(){
            while(f(b)<=0){
                b= b + 1;
            }
        }

        void secant_method1(){
            double x ;
            while(1){

                x = b - (( b - a )*f(b))/(f(b)-f(a));
                if(fabs(f(a)-f(x))<.000000001)
                    break;
                else{
                        a = b;
                        b = x;
              //  cout<<"ROOT = "<<x<<" f(root) = "<<f(x)<<endl;
            }

        }
        cout<<"Root of function is = "<<x<<endl;
}
};
int main(){
    secant_method N;
    N.check_a();
    N.check_b();

    N.secant_method1();
}

