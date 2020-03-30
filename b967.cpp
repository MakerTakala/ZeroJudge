#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<int> node[100000];
int dad[100000];
int ans=0;
int dfs(int r){
    int h1=0,h2=0;
    if(node[r].size()==0)
        return 0;
    for(int j=0;j<node[r].size();j++){
        h2=max(h2,dfs(node[r][j])+1);
        if(h2>h1)
            swap(h1,h2);
    }
    ans=max(ans,h1+h2);
    return h1;
}
int main()
{
    int n,r;
    while(cin>>n){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        memset(dad,-1,sizeof(dad));
        for(int i=0;i<n;i++)
            node[i].clear();
        ans=0;
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            node[a].push_back(b);
            dad[b]=a;
        }
        for(r=0;r<n;r++)
            if(dad[r]==-1)
                break;
        dfs(r);
        cout<<ans<<endl;
    }
return 0;
}
