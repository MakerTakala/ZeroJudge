#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
    if(a%10!=b%10)
        return a%10<b%10;
    else
        return a>b;
}
int main()
{
    int n;
    while(cin>>n){
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
return 0;
}
