#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str)){
        stringstream ss;
        int sum=0,num;
        ss<<str;
        while(ss>>num)
            sum+=num;
        cout<<sum<<endl;
    }
return 0;
}
