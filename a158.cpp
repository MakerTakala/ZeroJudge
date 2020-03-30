#include <iostream>
#include <algorithm>
#include <cstdio>
#include <sstream>
using namespace std;
int main()
{
    int t;
    string str;
    scanf("%d",&t);
    cin.ignore();
    while(t--){
        getline(cin,str);
        stringstream ss;
        ss<<str;
        int num[100],un,i=0,maxx=-1;
        while(ss>>un)
            num[i++]=un;
        for(int k=0;k<i;k++)
            for(int j=k+1;j<i;j++)
                maxx=max(maxx,__gcd(num[k],num[j]));
        cout<<maxx<<endl;
    }
return 0;
}
