#include <iostream>
using namespace std;

int main()
{
    int h1,m1,h2,m2,time,t,last;
    cin>>t;
    while(t--){
        cin>>h1>>m1>>h2>>m2>>time;
        last=(h2*60+m2)-(h1*60+m1);
        cout<<(last>=time?"Yes":"No")<<endl;
    }
return 0;
}
