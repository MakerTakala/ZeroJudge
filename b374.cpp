#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int main()
{
    int number[30000]={0},t,x;
    scanf("%d",&t);
    while(t--){
        cin>>x;
        number[x]++;
    }
    int maxx=0;
    set<int> s;
    for(int i=0;i<30000;i++){
        if(number[i]==maxx)
            s.insert(i);
        else if(number[i]>maxx){
            maxx=number[i];
            s.clear();
            s.insert(i);
        }
    }
    for(int x:s)
        cout<<x<<" "<<maxx<<endl;
return 0;
}
