#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
int main()
{
    int n;

    while(scanf("%d",&n)!=EOF){
        map<string,int> m;
        int i=0;
        while(n--){
            char s[5];
            scanf("%s",s);
            if(m[s]!=0)
                printf("Old! %d\n",m[s]);
            else{
                m[s]=++i;
                printf("New! %d\n",m[s]);
            }
        }
    }
return 0;
}
