#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n,m,ans[501][3]={};
    bool ok[501]={false};
        for(int a=0;a<20;a++)
            for(int b=0;b<a;b++)
                for(int c=0;c<b;c++){
                    int N = 0;
                    if(a>=3)
                        N+=a*(a-1)*(a-2)/6;
                    if(b>=2)
                        N+=b*(b-1)/2;
                    if(c>=1)
                        N+=c;
                    if(N>500)
                        break;
                    if(!ok[N]){
                        ok[N]=true;
                        ans[N][0]=a,ans[N][1]=b,ans[N][2]=c;
                    }
                }
    cin>>m;
    while(m--&&cin>>n){
        for(int x:ans[n])
            cout<<x;
        cout<<endl;
    }

return 0;
}
