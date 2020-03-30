#include <iostream>
#include <map>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    string name;
    scanf("%d\n\n",&n);
    while(n--){
        map<string,int> m;
        int times=0;
        while(getline(cin,name)&&name!=""){
                times++;
                m[name]++;
        }
        for(auto it=m.begin();it!=m.end();++it )
            cout<<it->first<<" "<<fixed<<setprecision(4)<<(double)it->second/times*100<<endl;
        cout << endl;
    }
return 0;
}
