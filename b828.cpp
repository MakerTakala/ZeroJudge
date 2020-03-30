#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int t;
    string line;
    cin>>t;
    while(t--){
        int sum=0;
        stack<char> st;
        bool wrong=false;
        cin>>line;
        for(int i=0;i<line.size();i++){
            if(line[i]=='(')
                st.push('(');
            else
                if(st.empty()){
                    wrong=true;
                    break;
                }
                else
                    st.pop();
        }
        if(!st.empty())
            wrong=true;
        if(wrong)
            cout<<"0"<<endl;
        else
            cout<<line.size()/2<<endl;
    }
return 0;
}
