#include <iostream>
#include <set>
#include <map>
#include <cstdio>
using namespace std;
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    map<string,set<string> > game;
    map<string,int> loseteam;
    string win,lose;
    for(int i=0;i<r;i++){
        cin>>win>>lose;
        game[win].insert(lose);
        loseteam[lose]=1;
    }
    for(auto x:game)
        if(x.second.size()==n-1&&loseteam[x.first]==0)
            cout<<x.first<<endl;
return 0;
}
