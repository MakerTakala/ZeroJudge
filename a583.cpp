#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n,m,distance=10000;
    cin>>n>>m;
    struct sit{
        int x,y;
    }st[m];
    for(int i=0;i<m;i++)
        cin>>st[i].x>>st[i].y;
    for(int i=0;i<m-1;i++)
        for(int j=i+1;j<m;j++)
            distance=min(distance,(st[i].x-st[j].x)*(st[i].x-st[j].x)+(st[i].y-st[j].y)*(st[i].y-st[j].y));
    cout<<fixed<<setprecision(4)<<sqrt(distance)<<endl;
return 0;
}
