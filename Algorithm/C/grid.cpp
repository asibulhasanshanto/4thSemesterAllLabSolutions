#include<bits/stdc++.h>
#define clr(a) memset(a,0,sizeof(a))
#define MAX 100
#define p1(a) cout<<"Check "<<a<<endl;
using namespace std;

int mat[MAX];
int n,m;

int result(){
    int ans=0;
    for(int x=3;x<(1<<m);x++){
        int cnt=0,tr=0;
        if (__builtin_popcount(x)==2){
            for (int i=0;i<n;i++){
                if (x==(mat[i]&x)){
                    cnt++;
                }
            }
            p1(cnt);
            cnt-=cnt>0;
            ans+=(cnt*(cnt+1))/2;
        }
    }
    return ans;
}


int main()
{
    freopen("inp.txt","r",stdin);
    cin>>n>>m;
    clr(mat);
    int ch;
    //cout << n<<m<<endl;
    for (int i=0;i<n;i++){
        int sum=0;
        for (int j=m-1;j>=0;j--){
            cin>>ch;
            sum+=pow(2,j)*ch;
        }
        mat[i]=sum;
        //cout << sum<<endl;

    }

    int ans=result();
    cout << ans<<endl;

}
