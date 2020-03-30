#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int t,a[101]={0},x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        a[x]++;
    }
    for(int i=1;i<=100;i++)
        for(int k=0;k<a[i];k++)
            printf("%d ",i);
return 0;
}
