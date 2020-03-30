#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int main()
{
    map<int,int> m;
    int n;
    while(cin>>n)
        m[n]++;
    for(auto e:m){
        if(e.second==2)
            cout<<e.first<<endl;
    }
return 0;
}
