#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a,string b){
    return a+b>b+a;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        vector<string> v(n);
        for(auto &x:v)
            cin>>x;
        sort(v.begin(),v.end(),cmp);
        for(auto x:v)
            cout<<x;
        cout<<endl;
    }
return 0;
}
