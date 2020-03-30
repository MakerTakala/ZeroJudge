#include <iostream>
using namespace std;
int main()
{
    int a[10000]={0};
    int x,sum=0;
    while(cin>>x){
        sum++;
        int i;
        for(i=sum-1;a[i-1]>=x&&i>0;i--){
            a[i+1]=a[i];
        }
        a[i+1]=a[i];
        a[i]=x;
        cout<<(sum&1?a[sum/2]:(a[sum/2-1]+a[sum/2])/2)<<endl;
    }
return 0;
}
