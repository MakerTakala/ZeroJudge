#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,a[19][19]={0},b[19][19]={0},x,y,color,sum=0;
    cin>>t;
    while(t--&&cin>>x>>y>>color)
        a[x-1][y-1]=(color==0?-1:1);
    cin>>t;
    while(t--&&cin>>x>>y>>color)
        b[x-1][y-1]=(color==0?-1:1);
    for(int i=0;i<19;i++)
        for(int j=0;j<19;j++)
            sum+=abs(a[i][j]-b[i][j]);
    cout<<sum<<endl;
return 0;
}
