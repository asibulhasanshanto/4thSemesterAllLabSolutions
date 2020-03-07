#include<bits/stdc++.h>
#define clr(a,x) memset(a,x,sizeof(a))
#define p1(a) cout<<"Check "<<a<<endl
#define p2(a,b) cout<<"Check "<<a<<" "<<b<<endl
#define MAX 105
#define INF 1000000000

using namespace std;

int main()
{
    freopen("intput.txt","r",stdin);
    int n,b,h,w,p,k;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)!=EOF){
        int mn=INF;
        while(h--){
            scanf("%d",&p);
            int cst=p*n;
            int wk=w;
            while(wk--){
                scanf("%d",&k);
                if(k>=n) mn=min(mn,cst);
            }
        }
        if(mn<=b) printf("%d\n",mn);
        else printf("stay home\n");
    }
}
