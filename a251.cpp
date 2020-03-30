#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[20],n;
        cin>>n;
        for(int i=0;i<4;i++)
            cin>>a[i];
        for(int i=4;i<n;i++)
            a[i]=a[i-4]+a[i-1];
        sort(a,a+n);
        cout<<a[n/2]<<endl;;
    }
    return 0;
}
