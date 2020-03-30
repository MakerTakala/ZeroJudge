#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct coo{
    int x,y;
}c[500000],ans[500000];
bool cmp(coo a,coo b){
    if(a.x!=b.x)
        return a.x<b.x;
    else
        return a.y<b.y;
}
int main()
{
    int n,times=1;
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>c[i].x>>c[i].y;
        sort(c,c+n,cmp);
        int cnt=0,maxy=-1;
        for(int i=n-1;i>=0;i--)
            if(c[i].y>maxy){
                ans[cnt].x=c[i].x,ans[cnt].y=c[i].y;
                maxy=c[i].y;
                cnt++;
            }
        sort(ans,ans+cnt,cmp);
        cout<<"Case "<<times++<<":"<<endl<<"Dominate Point: "<<cnt<<endl;
        for(int i=0;i<cnt;i++)
            printf("(%d,%d)\n",ans[i],ans[i].y);
    }
return 0;
}
