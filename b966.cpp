#include <iostream>
#include <algorithm>
using namespace std;
struct line{
    int r,l;
}li[10000];
bool cmp(line x,line y){
    if(x.l!=y.l)
        return x.l<y.l;
    else
        return x.r<y.r;
}
int main()
{
    int t,r,l,sum=0,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
        cin>>li[i].l>>li[i].r;
        sort(li,li+t,cmp);
    l=li[0].l,r=li[0].r;
    for(int i=1;i<t;i++){
        a=li[i].l,b=li[i].r;
        if(a<=r)
            r=max(r,b);
        else{
            sum+=r-l;
            l=li[i].l,r=li[i].r;
        }
    }
    sum+=r-l;
    cout<<sum<<endl;
return 0;
}
