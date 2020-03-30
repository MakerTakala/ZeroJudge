#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}
int main()
{
    int n,x;
    cin>>n;
    map<int,int> m;
    while(n--){
        cin>>x;
        m[x]++;
    }
    vector<pair<int,int>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
        cout<<x.first<<" "<<x.second<<endl;
return 0;
}
