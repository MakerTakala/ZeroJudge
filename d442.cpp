#include <iostream>
#include <set>
#include <cstdio>
using namespace std;
int sum(int a){
    int sum=0;
    while(a!=0){
        sum+=((a%10)*(a%10));
        a/=10;
    }
    return sum;
}
int main()
{
    int x,times=1,tem,n;
    scanf("%d",&n);
    while(n--){
        set<int> s;
        scanf("%d",&x);
        tem=x;
        while(x!=1){
            x=sum(x);
            auto it=s.find(x);
            if(it==s.end())
                s.insert(x);
            else
                break;
        }
        if(x==1)
            printf("Case #%d: %d is a Happy number.\n",times++,tem);
        else
            printf("Case #%d: %d is an Unhappy number.\n",times++,tem);
    }
return 0;
}
