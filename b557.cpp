#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int &x:v)
            cin>>x;
        int sum=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int k=0;k<n;k++)
                    if(v[i]*v[i]+v[j]*v[j]==v[k]*v[k])
                        sum++;
        cout<<sum/2<<endl;
    }
return 0;
}
