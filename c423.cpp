#include <iostream>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <set>
#include <vector>
#include <cstring>
using namespace std;
int su(string n){
    int sum=0;
    for(char x:n)
        sum+=(x-48);
    stringstream ss;
    ss<<sum;
    string num;
    ss>>num;
    if(sum>=10)
        return su(num);
    else
        return sum;
}
int main()
{
    int n,r,num;
    string str;
    while(cin>>n>>r){
        cin>>str;
        int y=0;
        set<string> s;
        string stri;
        for(int i=0;i<10;i++){
            string tem=(string)str+(char)(i+48);
            if(su(tem)==r){
                char a=(char)i+48;
                for(int i=0;i<n;i++){
                    stri=str.substr(0,i)+a+str.substr(i,n);
                    s.insert(stri);
                }
            }
        }
        vector<string> v(s.begin(),s.end());
        for(int i=1;i<s.size()-1;i++)
            cout<<v[i]<<endl;
    }
return 0;
}
