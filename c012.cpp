#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second)
        return a.second<b.second;
    else
        return a.first>b.first;
}
int main()
{
    string s;
    while(getline(cin,s)){
        map<int,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        vector<pair<int,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),cmp);
        for(pair<int,int> x:v)
            cout<<x.first<<" "<<x.second<<endl;
    }
return 0;
}
