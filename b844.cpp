#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,q,z;
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin>>n>>q){
        vector<int> ni(n),times;
        for(int &x:ni)
            cin>>x;
        sort(ni.begin(),ni.end());
        while(q--){
            cin>>z;
            int it=upper_bound(ni.begin(),ni.end(),z)-ni.begin();
            cout<<(it%2?1:0)<<'\n';
        }
    }
return 0;
}
