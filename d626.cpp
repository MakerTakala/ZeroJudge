#include <iostream>
using namespace std;
char m[101][101];
int n;
void dfs(int x,int y){
    m[x][y]='+';
    if(x+1<n&&m[x+1][y]=='-')
        dfs(x+1,y);
    if(y+1<n&&m[x][y+1]=='-')
        dfs(x,y+1);
    if(x-1>0&&m[x-1][y]=='-')
        dfs(x-1,y);
    if(y-1>0&&m[x][y-1]=='-')
        dfs(x,y-1);
}
int main()
{
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>m[i];
        int x,y;
        cin>>x>>y;
        dfs(x,y);
        for(int i=0;i<n;i++)
            cout<<m[i]<<endl;;
    }
return 0;
}
