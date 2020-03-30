#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;
int main(){
    string s1;
    while(getline(cin,s1)){
        int sum=0,num;
        bool iftext=true;
        string s2;
        for(int i=0;i<=s1.length();i++){
            if((s1[i]==' '||s1[i]=='\0')&&iftext){
                stringstream ss(s2);
                ss>>num;
                sum+=num;
                s2="";
                num=0;
            }
            else if((s1[i]==' '||s1[i]=='\0')&&!iftext){
                iftext=true;
                s2="";
            }
            else if('0'<=s1[i]&&s1[i]<='9')
                s2+=s1[i];
            else
                iftext=false;
        }
        cout<<sum<<endl;
    }
return 0;
}
