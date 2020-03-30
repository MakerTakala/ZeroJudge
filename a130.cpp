#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
    struct infor{
        string address;
        int l;
    };infor web[10];
    int t,cnt=0;
    cin>>t;
    while(t--){
        for(int i=0;i<10;i++)
            cin>>web[i].address>>web[i].l;
        int Max=-1;
        for(int i=0;i<10;i++)
            if(web[i].l>Max)
                Max=web[i].l;
        printf("Case #%d:\n",++cnt);
        for(int i=0;i<10;i++)
            if(web[i].l==Max)
                cout<<web[i].address<<endl;
    }
}
