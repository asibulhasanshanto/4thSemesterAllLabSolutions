#include<bits/stdc++.h>
#define clr(a,x) memset(a,x,sizeof(a))
#define p1(a) cout<<"Check "<<a<<endl
#define p2(a,b) cout<<"Check "<<a<<" "<<b<<endl
#define MAX 105
#define INF 1000000000

using namespace std;

int main()
{
    int test,t=0;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int p=n*(n-1);
        printf("Case %d: ",++t);
        if(p%4==0) cout<<p/4<<endl;
        else if(p%2==0) cout<<p/2<<"/"<<2<<endl;
        else cout<<p<<"/"<<4<<endl;
    }

    return 0;
}
