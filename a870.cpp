#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<string> lst;
    string cmd,x,n;
    while(cin>>cmd){
        if(cmd=="ADD"){
            cin>>x;
            lst.push_back(x);
        }
        else if(cmd=="INSERT"){
            cin>>x>>n;
            auto it=find(lst.begin(),lst.end(),n);
            lst.insert(it,x);
        }
        else if(cmd=="REMOVE"){
            cin>>x;
            auto it=find(lst.begin(),lst.end(),x);
            lst.erase(it);
        }
        else{
            for(auto e:lst)
                cout<<e<<" ";
            cout<<endl;
        }
    }
return 0;
}

