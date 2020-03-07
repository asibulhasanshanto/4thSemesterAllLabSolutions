#include <bits/stdc++.h>
using namespace std;
float x[1000],n;
float y[1005][1005];

class Forward_interpolation{
    public:
    float u_cal(float u, int n)
    {
        float temp = u;
        for (int i = 1; i < n; i++)
            temp = temp * (u - i);
        return temp;
    }

    int fact(int n)
    {
        int f = 1;
        for (int i = 2; i <= n; i++)
            f =f*i;
        return f;
    }

    void Forward_method(){

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++)
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
	}

    float value = 8;


	float sum = y[0][0];
	float u = (value - x[0]) / (x[1] - x[0]);
	for (int i = 1; i < n; i++) {
		sum = sum + (u_cal(u, i) * y[0][i]) /
                                        fact(i);

	}

	cout << "\n Value at " << value << " is "
		<< sum << endl;
    }

};

int main()
{

	int i,j,k,l,m,a,b;

	cout<<"Enter the number of x ";
	cin>>n;

    cout<<"Enter the value of x ";
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    cout<<"Enter the value of f(x) ";
	 for(i=0;i<n;i++){
        cin>>y[i][0];
    }
	Forward_interpolation N;
	N.Forward_method();

	return 0;
}
