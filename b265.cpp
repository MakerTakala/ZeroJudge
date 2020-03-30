#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0){
        map<string,int> m;
        int maxx=0,times=1;
        while(n--){
            string s,str;
            vector<string> v(5);
            for(int i=0;i<5;i++){
                cin>>str;
                v.push_back(str);
            }
            sort(v.begin(),v.end());
            for(auto x:v)
                s+=x;
            m[s]++;
            if(maxx<m[s]){
                maxx=m[s];
                times=1;
            }
            else if(maxx==m[s])
                times++;
        }
        cout<<maxx*times<<endl;


    }
return 0;
}
