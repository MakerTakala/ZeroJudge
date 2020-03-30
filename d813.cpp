#include <iostream>
#include <cstdio>
using namespace std;
int father[50001],cnt;
int find_root(int n){
    if(father[n]==n)
        return n;
    father[n]=find_root(father[n]);
    return find_root(father[n]);
}
void un(int a,int b){
    if(a!=b){
        father[a]=b;
        cnt--;
    }
}
int main()
{
    int n,m,a,b,times=1;
    while(scanf("%d %d",&n,&m)!=EOF){
        for(int i=1;i<=n;i++)
            father[i]=i;
        cnt=n;
        while(m--&&scanf("%d %d",&a,&b)){
            int fa=find_root(a),fb=find_root(b);
            un(fa,fb);
        }
        printf("Case %d: %d\n",times++,cnt);
    }
return 0;
}
