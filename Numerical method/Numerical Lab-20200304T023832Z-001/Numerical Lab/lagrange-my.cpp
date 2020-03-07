#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;
class lagrange_method
{
    public:
	 float x[100], y[100], xp, yp=0, p;
	 int i,j,n;

	 void askN()
     {
        cout << "Enter number of values: ";
        cin >> n;
     }
	 void ask_xy(){
        cout<<"Enter data:"<< endl;
        for(i=1;i<=n;i++)
        {
            cout<<"x["<< i<<"] = ";
            cin>>x[i];
            cout<<"y["<< i<<"] = ";
            cin>>y[i];
        }
	 }
	 void ask_XP(){
        cout<<"Enter interpolation point: ";
        cin>>xp;
	 }
     void lagrange(){
        for(i=1;i<=n;i++)
        {
            p=1;
            for(j=1;j<=n;j++)
            {
                if(i!=j)
                {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
                }
            }
            yp = yp + p * y[i];
        }
        cout<< endl<<"Interpolated value at "<< xp<< " is "<< yp;
     }

};
int main()
{
    freopen("text.txt","r",stdin);
    lagrange_method n;
    n.askN();
    n.ask_xy();
    n.ask_XP();
    n.lagrange();

    return 0;
}


