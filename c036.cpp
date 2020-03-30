#include <iostream>
using namespace std;
int main()
{
    float h,u,d,f;
    while(cin>>h&&h!=0&&cin>>u>>d>>f){
        float high=0;
        int day=0;
        do{
            high+=u*(100-f*day>0)*(100-f*day++)/100;
            if(high>h)
                break;
            high-=d;
        }while(high<h&&high>=0);
            cout<<(high>0?"success on day ":"failure on day ")<<day<<endl;
    }
return 0;
}
