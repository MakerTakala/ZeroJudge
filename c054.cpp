#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int main()
{
    map<char,char> m;
    char wrong[]="1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./" ;
    char right[]="`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,." ;
    for(int i=0;i<strlen(right);i++)
        m[wrong[i]]=right[i];
    char c;
    while((c=getchar())&&c!=EOF){
        if(m.find(c)!=m.end())
            putchar(m[c]);
        else
            putchar(c);
    }
return 0;
}
