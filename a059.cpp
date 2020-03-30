#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int pow(int x){
    int y=sqrt(x);
    if(pow(y,2)==x)
        return x;
    else
        return 0;
}
int main()
{
    int a,b,t,s=1;
    cin>>t;
    while(t--&&cin>>a>>b){
        int sum=0;
        for(int i=a;i<=b;i++){
            sum+=pow(i);
        }
        printf("Case %d: %d\n",s++,sum);
    }
    return 0;
}
