#include <iostream>
using namespace std;
//n個面可形成空間=n-1個面可形成空堅+n-1條線可形成空間
int surface(int x){
    if(x==1)
        return 2;
    else
        return x+surface(x-1);
}
int space(int y){
    if(y==1)
        return 2;
    else
        return space(y-1)+surface(y-1);
}
int main()
{
    int a;
    while(cin>>a)
        cout<<space(a)<<endl;
return 0;
}
