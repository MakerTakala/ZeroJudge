#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--&&cin>>n){
        int shop[n],lack=0;
        for(int &x:shop)
            cin>>x;
        sort(shop,shop+n,greater<int>());
        for(int i=0;i<n;i++)
            lack+=(i%3==2?shop[i]:0);
        cout<<lack<<endl;
    }
return 0;
}
