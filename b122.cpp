#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m,n;
    pair<int,int> goal;
    while(cin>>m>>n){
        int area[m][n],minn=9999999999;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>area[i][j];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                int sum=0;
                for(int a=0;a<m;a++)
                    for(int b=0;b<n;b++)
                        sum+=( abs(i-a) + abs(j-b) ) * area[a][b];
                if(sum<minn){
                    minn=sum;
                    goal.first=i;
                    goal.second=j;
                }
            }
        cout<<goal.first+1<<" "<<goal.second+1<<endl;
    }

    return 0;
}
