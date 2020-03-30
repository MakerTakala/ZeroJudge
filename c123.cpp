#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    int n;
    while(cin>>n&&n!=0) {
        int v[n];
        while(cin>>v[0]&&v[0]!=0){
            for(int i=1;i<n;i++)
                cin>>v[i];
            int position=0;
            stack<int> st;
            for (int i=1;i<=n;i++) {
                st.push(i);
                while(!st.empty()&&st.top()==v[position]){
                    position++;
                    st.pop();
                }
            }
            cout<<(st.empty()?"Yes":"No")<<endl;
        }
    }
return 0;
}
