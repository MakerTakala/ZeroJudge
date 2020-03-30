#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <ctype.h>
struct counter{
        char name;
        int times;
}alpha[26];
bool cmp(counter a,counter b){
    if(a.times!=b.times)
        return a.times>b.times;
    else
        return a.name<b.name;
}
using namespace std;
int main()
{
    int n;
    string a;
    scanf("%d\n",&n);
    for(int i=0;i<26;i++)
        alpha[i].name=(char)(i+65);
    alpha[26].times={0};
    while(n--){
        getline(cin,a);
        for(int i=0;i<a.size();i++)
            if(isalpha(a[i])){
                a[i]=toupper(a[i]);
                alpha[a[i]-65].times++;
            }
    }
    sort(alpha,alpha+26,cmp);
    for(int i=0;i<26&&alpha[i].times!=0;i++)
        cout<<alpha[i].name<<" "<<alpha[i].times<<endl;
return 0;
}
