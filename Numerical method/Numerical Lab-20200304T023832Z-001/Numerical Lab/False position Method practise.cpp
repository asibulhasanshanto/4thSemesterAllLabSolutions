#include<bits/stdc++.h>
#define PI 0.01
using namespace std;

class False_position_method{
    public:
        double a=0,b=0,c;
    double fun(double x){
        return x*x*x-x-1;
    }

    void Find_a(){
        while(fun(a)>=0){
            a--;
        }
       // cout<<a<<endl;
    }
     void Find_b(){
         while(fun(b)<=0){
            b++;
        }
        // cout<<b<<endl;
    }
    void False_position_evaluate(){
        while(1){

            c=(a*fun(b)-b*fun(a))/(fun(b)-fun(a));

            if(fabs(fun(a)-fun(c))<.0001){
                break;
            }
            else if(fun(a)*fun(c)<0){
                b=c;
            }
            else{
                a=c;
            }
            //cout<<"c= "<<c<<endl;
        }
        cout<<"the root is :"<<c<<endl;
    }


};

int main(){
    False_position_method N;
    N.Find_a();
    N.Find_b();
    N.False_position_evaluate();

}
