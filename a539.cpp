#include <iostream>
using namespace std;
int main()
{
    int n,a[1000];
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>a[i];
        int sum=0;
        for(int i=0;i<n;i++)
            for(int j=i-1;j>=0;j--)
                if(a[i]<a[j])
                    sum++;
        cout<<"Minimum exchange operations : "<<sum<<endl;
    }

    return 0;
}
