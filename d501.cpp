#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        vector<int> v(n);
        for(int &x:v)
            cin>>x;
        sort(v.begin(),v.end());
        cout<<"A=";
        if(n&1)
            cout<<v[n/2]<<endl;
        else{
            for(int i=v[n/2-1];i<v[n/2];i++)
                cout<<i<<",";//","->>"、"
            cout<<v[n/2]<<endl;
        }
    }
return 0;
}
