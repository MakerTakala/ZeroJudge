#include <iostream>
using namespace std;
//n�ӭ��i�Φ��Ŷ�=n-1�ӭ��i�Φ��Ű�+n-1���u�i�Φ��Ŷ�
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
