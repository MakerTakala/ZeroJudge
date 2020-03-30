#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct statue{
    int h,w,id;
}s[10000];
bool cmp(statue a,statue b){
    if(a.h!=b.h)
        return a.h<b.h;
    else if(a.w!=b.w)
        return a.w<b.w;
    else
        return a.id<b.id;
}
int main()
{
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>s[i].h>>s[i].w;
            s[i].id=i;
        }
        sort(s,s+n,cmp);
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=abs(i-s[i].id);
        cout<<sum<<endl;
    }
return 0;
}
