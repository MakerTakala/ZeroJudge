#include <iostream>
using namespace std;
int fac(int x){
    int sum=1;
    for(int i=x;i;i--)
        sum*=i;
    return sum;
}
int main()
{
    int n,m;
    while(cin>>n>>m){
        cout<<fac(n)/(fac(m)*fac(n-m))<<endl;
    }
return 0;
}
