#include<bits/stdc++.h>
using namespace std;



class newton_raphson{
    public:
    double func(double x){
     return x*x*x - x - 1;
    //return x*x*x - x - 1;
    }
    double derivative_func(double x){
        return 3*x*x - 1;
       // return 3*x*x - 1;
    }
    void root_function(){
    double x=20000;
    double h=func(x)/derivative_func(x);
    while (abs(h) >= 0.001)
    {
        h = func(x)/derivative_func(x);

       // cout<<"f(x)"<<func(x)<<endl;
        x = x - h;
    }

    cout << "The value of the root is : " << x<<endl;;
    }
};

int main(){
    newton_raphson N;
    N.root_function();

}
