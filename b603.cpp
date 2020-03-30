#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int x1,y1,x2,y2,a,b,c,d;
    while(cin>>x1>>y1>>x2>>y2){
        a=(x2-x1)*(x2-x1);
        b=(y2-y1);
        c=(-2)*b*x1;
        d=b*x1*x1+y1*a;
        int x=__gcd(a,b);
        x=__gcd(x,c);
        x=__gcd(x,d);
        printf("%dy = %dx^2 + %dx + %d\n",a/x,b/x,c/x,d/x);
    }
return 0;
}
