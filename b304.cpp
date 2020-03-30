#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    string x;
    cin>>n;
    cin.ignore();
    while(n--){
        bool error=false;
        stack<char> s;
        getline(cin,x);
        for(int i=0;i<x.size();i++){
            if(x[i]=='('||x[i]=='[')
                s.push(x[i]);
            else if(x[i]==')'){
                if(s.empty()||s.top()!='('){
                    error=true;
                    break;
                }
                s.pop();
            }
            else{
                if(s.empty()||s.top()!='['){
                    error=true;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty())
            error=true;
        cout<<(error?"No":"Yes")<<endl;
    }
return 0;
}
