#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0){
        queue<int> q;
        int out[100]={0},position=0;
        for(int i=1;i<=n;i++)
            q.push(i);
        while(q.size()>1){
            out[position++]=q.front();
            q.pop();
            q.push(q.front());
            q.pop();
        }

        cout<<(n>1?"Discarded cards: 1":"Discarded cards: ");
        for(int i=1;i<n-1;i++)
            cout<<", "<<out[i];
        cout<<endl<<"Remaining card: "<<q.front()<<endl;
    }
return 0;
}
