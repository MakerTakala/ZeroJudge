#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
struct point{
    int x,y;
}p[200];
int main()
{
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>p[i].x>>p[i].y;
        int maxx=0,area;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                for(int k=j+1;k<n;k++){
                    area=abs(p[i].x*p[j].y+p[j].x*p[k].y+p[k].x*p[i].y-p[i].y*p[j].x-p[j].y*p[k].x-p[k].y*p[i].x);
                    maxx=max(maxx,area);
                }
        printf("%.2f\n",maxx/2.0);
    }
return 0;
}
