#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<=317;i++)
        v.push_back(i*i);
    int a,b;
    while(cin>>a>>b&&a!=0&&b!=0){
        auto left=lower_bound(v.begin(),v.end(),a);
        auto right=upper_bound(v.begin(),v.end(),b);
        cout<<right-left<<endl;
    }
return 0;
}

