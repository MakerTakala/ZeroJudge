#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int a[n]={0},sum=0;
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
            sum+=a[i]*(i+1);
        cout<<sum<<endl;
    }
return 0;
}
