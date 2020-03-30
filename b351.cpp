#include <iostream>
#include <cstring>
using namespace std;
bool magic[5000][5000];
void makemagiclist(int n,int r,int c){
    for(int i=0;i<n;i++)
        memset(magic[i],false,n*sizeof(bool));
    int x=0,y=n/2;
    magic[x][y]=true;
    for(int i=2;i<=n*n;i++){
        if(x-1>=0&&y-1>=0&&!magic[x-1][y-1])
            x--,y--;
        else if(x-1>=0&&y-1<0&&!magic[x-1][n-1])
            x--,y=n-1;
        else if(x-1<0&&y-1>=0&&!magic[n-1][y-1])
            x=n-1,y--;
        else{
            x++;
        }
        if(x==r-1&&y==c-1)
            cout<<i<<endl;
        magic[x][y]=true;
    }
}
int main()
{
    int t,n,r,c;
    cin>>t;
    while(t--){
        cin>>n>>r>>c;
        makemagiclist(n,r,c);
    }
return 0;
}
