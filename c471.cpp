#include <iostream>
#include <algorithm>
struct thing{
    int w,f;
}t[100000];
bool cmp(thing a,thing b){
    return a.w*b.f<b.w*a.f;
}
using namespace std;
int main()
{
    int n;
    long long int sum=0,out=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>t[i].w;
    for(int i=0;i<n;i++)
        cin>>t[i].f;
    sort(t,t+n,cmp);
    for(int i=0;i<n-1;i++){
        sum+=t[i].w;
        out+=sum*t[i+1].f;
    }
    cout<<out<<endl;
return 0;
}
