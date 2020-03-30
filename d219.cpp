#include <iostream>
using namespace std;
long long int dc(int b,int p,int m){
    if(!p)
        return 1;
    else if(p==1)
        return b%m;
    else
        return dc(b,p/2,m)*dc(b,p/2,m)*(p&1?b:1)%m;
}
int main()
{
    int b,p,m;
    while(cin>>b>>p>>m){
        cout<<dc(b,p,m)<<endl;
    }
return 0;
}
