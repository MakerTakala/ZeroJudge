#include <iostream>
using namespace std;
int main()
{
    int n,d;
    while(cin>>n>>d){
        int lst[n][n]={{0}},r=2,x=n/2,y=n/2;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>lst[i][j];
        cout<<lst[x][y];
        while(r<2*n){
            for(int i=0;i<r/2;i++){
                if(d==0)
                    y--;
                else if(d==1)
                    x--;
                else if(d==2)
                    y++;
                else
                    x++;
                cout<<lst[x][y];
            }
            d=(d+1)%4;
            r++;
        }
        for(int i=0;i<r/2-1;i++){
            if(d==0)
                y--;
            else if(d==1)
                x--;
            else if(d==2)
                y++;
            else
                x++;
            cout<<lst[x][y];
        }
        cout<<endl;

    }
return 0;
}
