#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
int main()
{
    int n,m,x,maxx=0;;
    scanf("%d %d",&n,&m);
    priority_queue<int, deque<int>, greater<int> > pq;
    while(m--)
        pq.push(0);
    while(n--){
        scanf("%d",&x);
        pq.push(pq.top()+x);
        maxx=max(maxx,pq.top()+x);
        pq.pop();
    }
    printf("%d",maxx);
return 0;
}
