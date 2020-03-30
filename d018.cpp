#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;
int main()
{
    string s1;
    while(getline(cin,s1)){
        double sum=0,num=0;
        int tem;
        string s2;
        for(int i=0;i<=s1.length();i++)
            if(s1[i]==':'){
                tem=i;
                while(s1[tem]!=' '&&s1[tem]!='\0')
                    s2+=s1[++tem];
                stringstream ss(s2);
                ss>>num;
                if(s1[i-1]%2==1)
                    sum+=num;
                else
                    sum-=num;
                s2="";
                num=0;
                i=tem;
            }
        cout<<sum<<endl;
    }
return 0;
}
