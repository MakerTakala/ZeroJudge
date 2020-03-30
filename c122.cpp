#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
using namespace std;
int main()
{
    set<long long int> s;
    s.insert(1);
    auto it=s.begin();
    for(int i=0;i<5842;i++){
        s.insert(*it*2);
        s.insert(*it*3);
        s.insert(*it*5);
        s.insert(*it*7);
        it++;
    }
    int n;
    vector<long long int> v(s.begin(),s.end());
    while(cin>>n&&n!=0){
        cout<<"The "<<n;
        if(n%10==1&&n%100!=11)
            cout<<"st ";
        else if(n%10==2&&n%100!=12)
            cout<<"nd ";
        else if(n%10==3&&n%100!=13)
            cout<<"rd ";
        else
            cout<<"th ";
        cout<<"humble number is "<<v[n-1]<<"."<<endl;
    }
return 0;
}
