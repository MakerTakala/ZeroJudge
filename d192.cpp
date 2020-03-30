#include <iostream>
using namespace std;
int main()
{
    int t,n,k,x;
    cin>>t;
    for(int i=1;i<=t;i++){
        x=0;
        cin>>n>>k;
        for(int j=2;j<=n;j++)
            x=(x+k)%j;
        cout<<"Case "<<i<<": "<<x+1<<endl;
    }
return 0;
}
