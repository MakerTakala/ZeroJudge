#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        priority_queue<int, deque<int>, greater<int> > pq;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pq.push(x);
        }
        int sum=0;
        while(pq.size()>1){
            int q=pq.top();
            pq.pop();
            q+=pq.top();
            pq.pop();
            sum+=q;
            pq.push(q);
        }
        cout<<sum<<endl;
    }
return 0;
}
