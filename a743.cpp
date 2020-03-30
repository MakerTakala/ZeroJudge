#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <set>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    map<string,int> m;
    string s,str;
    set<string> st;
    while(n--){
        getline(cin,s);
        stringstream ss;
        ss<<s;
        ss>>str;
        m[str]++;
        st.insert(str);
    }
    vector<string> v(st.begin(),st.end());
    sort(v.begin(),v.end());
    for(int i=0;i<st.size();i++){
        str=v[i];
        cout<<m.find(str)->first<<" "<<m[str]<<endl;
    }
return 0;
}
