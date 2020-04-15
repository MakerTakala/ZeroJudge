#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans = 0, p[n] = {0}, t1, t2;
        for(int i = 0; i < n; i++)
            scanf("%d",&p[i]);
        sort(p,p+n);
        while(n>3){
            t1 = p[1] + p[0] + p[n-1] + p[1];
            t2 = p[n-1] + p[0] + p[n-2] + p[0];
            ans += min(t1,t2);
            n -= 2;
        }
        if(n == 3)
            ans += (p[0]+p[1]+p[2]);
        else if(n == 2)
            ans += p[1];
        else
            ans += p[0];
        printf("%d\n",ans);
    }
return 0;
}
