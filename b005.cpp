#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        vector<int> v(n*n);
        for(int &x:v)
            cin>>x;
        int x,y,sumx,sumy,cx=0,cy=0;
        for(int i=0;i<n;i++){
            sumx=0,sumy=0;
            for(int k=0;k<n;k++){
                sumx+=v[n*i+k];
                sumy+=v[n*k+i];
            }
            if(sumx%2==1){
                x=i;
                cx++;
            }
            if(sumy%2==1){
                y=i;
                cy++;
            }
        }
        if(cx==0&&cy==0)
            cout<<"OK"<<endl;
        else if(cx==1&&cy==1)
            printf("Change bit (%d,%d)\n",x+1,y+1);
        else
            cout<<"Corrupt"<<endl;
    }

return 0;
}
