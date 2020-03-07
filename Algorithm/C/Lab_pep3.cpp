#include<bits/stdc++.h>
#define clr(a,x) memset(a,x,sizeof(a))
#define p1(a) cout<<"Check "<<a<<endl
#define p2(a,b) cout<<"Check "<<a<<" "<<b<<endl
#define MAX 105

using namespace std;

int n,m;
string s[MAX];
int ans=0,vis[MAX][MAX];

void dfs(int x,int y){
    int dir[8][2]={-1,-1,-1,0,-1,1,0,-1,0,1,1,-1,1,0,1,1};
    vis[x][y]=1;
    for(int i=0;i<8;i++){
        int tx=x+dir[i][0];
        int ty=y+dir[i][1];
        //p2(tx,ty);
        if(tx<0 || tx>=n || ty<0 || ty>=m) continue;
        if(vis[tx][ty]==1) continue;
        if(s[tx][ty]=='*') continue;
        //vis[tx][ty]=1;
        dfs(tx,ty);
        //p2(dir[i][0],dir[i][1]);
    }
}

int main()
{
    freopen("intput.txt","r",stdin);
    int test=1,t=0;
    //cin>>test;
    while(1){
        scanf("%d%d",&n,&m);
        ans=0;
        clr(vis,0);
        if(n==0 && m==0) break;
        for(int i=0;i<n;i++) cin>>s[i];
        //for checking all cell
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && s[i][j]=='@'){
                    vis[i][j]=1;
                    ans++;
                    dfs(i,j);
                    //printf("akldhlakkkkkkkala");
                }
            }
        }
        printf("%d\n",ans);
    }
}


