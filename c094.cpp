#include <iostream>
using namespace std;
int main()
{
    int n,m,c,x,times=1;
    while(cin>>n>>m>>c&&n&&m&&c){
        int sum=0,maxx=0,ele[n+1]={0};
        bool elenf[n+1]={false};
        for(int i=1;i<=n;i++){
            cin>>x;
            ele[i]=x;
        }
        while(m--){
            cin>>x;
            sum+=(elenf[x]?-1:1)*ele[x];
            elenf[x]=!elenf[x];
            maxx=max(maxx,sum);
        }
        if(times>1)
            cout<<endl;
        if(maxx>c)
            cout<<"Sequence "<<times++<<endl<<"Fuse was blown."<<endl;
        else
            cout<<"Sequence "<<times++<<endl<<"Fuse was not blown.\nMaximal power consumption was "<<maxx<<" amperes."<<endl;

    }
return 0;
}
