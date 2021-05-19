#include <iostream>
#include <vector>
#include <algorithm>#
#include <cstdio>
using namespace std;
int n , m;
bool times = false;
void DFS(int num[], int layer, int sum, int ans[],int vol){
    if(sum == m){
        times = true;
        for(int i = 0; i < vol; i++){
            printf("%d ",ans[i]);
        }
        printf("\n");
        return;
    }
    if(layer < n && sum <= m){
        ans[vol] = num[layer];
        DFS(num, layer + 1, sum + num[layer], ans, vol + 1);
        DFS(num, layer + 1, sum, ans, vol);
    }
    else{
        return;
    }
}
int main()
{
    scanf("%d %d", &n, &m);
    int num[n], ans[n] = {0};
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    sort(num, num + n);
    DFS(num, 0, 0, ans,0);
    cout<<(times?"":"-1")<<endl;
return 0;
}
