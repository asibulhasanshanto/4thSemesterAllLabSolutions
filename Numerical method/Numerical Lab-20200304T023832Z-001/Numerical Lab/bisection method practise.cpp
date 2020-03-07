#include<bits/stdc++.h>
using namespace std;
#define PI 0.01

class Bisection_Method{

    public:
        double a=0,b=0,c;
        double Bisection_Function(double x){
             return x*x*x-x-1;
        }
        void Find_a(){
            while(Bisection_Function(a)>=0){
                a--;
            }
           // cout<<a<<endl;
        }
        void Find_b(){
            while(Bisection_Function(b)<=0){
                b++;
            }
            //cout<<b<<endl;
        }
        void Bisection_evaluate(){
           while((b-a)>=PI){
                c=(a+b)/2;

                if(Bisection_Function(c)==0.00)
                break;
                else if(Bisection_Function(a)*Bisection_Function(c)<0){
                    b=c;
                }
                else{
                    a=c;
                }

           }
           cout<<"(root) = "<<c<<endl;
        }


};

int main(){
    Bisection_Method N;
    N.Find_a();
    N.Find_b();
    N.Bisection_evaluate();
}
