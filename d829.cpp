#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    string a;
        while(getline(cin,a)&&a!="#"){
            if(next_permutation(a.begin(),a.end()))
                cout<<a<<endl;
            else
                cout<<"No Successor"<<endl;
        }
return 0;
}
