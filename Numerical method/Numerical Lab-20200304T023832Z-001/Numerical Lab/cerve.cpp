#include<bits/stdc++.h>
using namespace std;
class curve_fitting{
    double x,y,xx,xy,m,c;
    public:
    curve_fitting(int n,double ar[],double br[]){

        x=y=xx=xy=0;
        for(int i=0;i<n;i++){
            x+=ar[i];
            y+=br[i];
            xx+=ar[i]*ar[i];
            xy+=ar[i]*br[i];
        }
        c=(x*xy-y*xx)/(x*x-n*xx);///a1s
        m=(y-c*n)/x;///a2
    }
    double solution(double tem){
        return m*tem+c;
    }
};
int main(){
     //freopen("text.txt","r",stdin);
    int i,n;
    /// given some data of an linear equation
    /// x0,y0,x1,y1,..........xn,yn now find yk from given xk
    cin>>n;
    double x[n+5],y[n+5];
    for(i=0;i<n;i++)cin>>x[i]>>y[i];
    curve_fitting t=curve_fitting(n,x,y);
    double X;
    cin>>X;
    cout<<t.solution(X)<<endl;
    return 0;
}


