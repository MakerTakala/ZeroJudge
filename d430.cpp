#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int sum=0;
    string s1,s2;
    char c;
    while((c=getchar())!=EOF){
        if(isalpha(c)||isdigit(c))
            s1+=c;
        else if(c==' '||c=='\n')
            s1+=" ";
    }
    stringstream ss(s1);
    while(ss>>s2)
        sum++;
    cout<<sum<<endl;
return 0;
}
