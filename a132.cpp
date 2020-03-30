#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    stack<int> s;
    while(cin>>n&&n!=0){
        int p=0;
        while(n!=0){
            s.push(n&1);
            p+=n&1;
            n>>=1;
        }
        cout<<"The parity of ";
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        printf(" is %d (mod 2).\n",p);
    }
return 0;
}
