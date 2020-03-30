#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
struct city{
    int L1,L2;
}c[1000000];
bool cmp(city a,city b){
    if (a.L1!=b.L1)
        return a.L1>b.L1;
	return a.L2<b.L2;
}
int main()
{
    int p1x,p1y,p2x,p2y,n,maxx,maxxx;
    scanf("%d %d\n%d %d\n%d",&p1x,&p1y,&p2x,&p2y,&n);
    int x,y;
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        c[i].L1=(x-p1x)*(x-p1x)+(y-p1y)*(y-p1y);
        c[i].L2=(x-p2x)*(x-p2x)+(y-p2y)*(y-p2y);
    }
    sort(c,c+n,cmp);
    int ans=c[0].L1,tem=c[0].L2;
	for (int i=0;i<n-1;i++){
        tem=max(tem,c[i].L2);
		ans=min(ans,c[i+1].L1+tem);
	}
    ans=min(ans,tem);
	printf("%d\n",ans);
return 0;
}
