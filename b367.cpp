#include <iostream>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        bool ans = false;
        cin>>n>>m;
        int a[n][m];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
        cin>>a[i][j];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m/2+1; j++)
                if(a[i][j] != a[n-i-1][m-j-1])
                    ans = true;
        cout<<(ans?"keep defending":"go forward")<<endl;
    }

return 0;
}
