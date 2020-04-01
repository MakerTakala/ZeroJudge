#include <iostream>
#include <cstdio>
using namespace std;
bool land[512][512];
int w=512,n=512,e=0,s=0,a=0;
void dfs(int x,int y){
    a++;
    w = min(y,w);
    n = min(x,n);
    e = max(y,e);
    s = max(x,s);
    land[x][y] = 0;
    if(land[x+1][y] && x+1 < 512)
        dfs(x+1,y);
    if(land[x-1][y] && x-1 > -1)
        dfs(x-1,y);
    if(land[x][y+1] && y+1 < 512)
        dfs(x,y+1);
    if(land[x][y-1] && y-1 > -1)
        dfs(x,y-1);
}
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            cin>>land[i][j];
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            if(land[i][j]){
                w=512,n=512,e=0,s=0,a=0;
                dfs(i,j);
                printf("%d %d %d %d %d\n",w,n,e,s,a);
            }
return 0;
}
