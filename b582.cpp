#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int x[n],y[n];
        for(int i=0;i<n;i++)
            scanf("%d %d",&x[i],&y[i]);
        nth_element(x,x+n/2,x+n);
        nth_element(y,y+n/2,y+n);
        int r=x[n/2],s=y[n/2];
        long long int sum=0;
        for(int i=0;i<n;i++)
            sum+=(abs(x[i]-r)+abs(y[i]-s));
        cout<<sum<<endl;
    }
return 0;
}
