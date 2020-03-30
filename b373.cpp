#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n],cnt=0;
        for(int &x:a)
            cin>>x;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(a[i]>a[j]){
                    swap(a[i],a[j]);
                    cnt++;
                }
        cout<<cnt<<endl;
    }
return 0;
}
