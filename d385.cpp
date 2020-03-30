#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
bool cmp(string x,string y){
    string a=x+y,b=y+x;
    return a>b;
}
int main()
{
    int n;
    string s;
    while(cin>>n&&n!=0){
        vector<string> big(n);
        for(string &x:big)
            cin>>x;
        sort(big.begin(),big.end(),cmp);
        for(string x:big)
            cout<<x;
        cout<<endl;
    }
return 0;
}
