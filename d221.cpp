#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    long long int x;
    while(cin>>n&&n){
        priority_queue<long long int, deque<long long int>, greater<long long int> > pq;
        for(int i=0;i<n;i++){
            cin>>x;
            pq.push(x);
        }
        long long int pay=0;
        while(pq.size()>1){
            x=pq.top();
            pq.pop();
            x+=pq.top();
            pq.pop();
            pay+=x;
            pq.push(x);
        }
        cout<<pay<<endl;
    }
return 0;
}
