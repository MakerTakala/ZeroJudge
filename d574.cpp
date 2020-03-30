#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        string in,out;
        int cnt=1,lon=0;
        bool che=true;
        cin>>in;
        for(int i=0;i<n;i++){
            if(out.size()>n){
                che=false;
                break;
            }
            else
                if(in[i]==in[i+1])
                    cnt++;
                else{
                    string s;
                    while(cnt){
                        s+=(char)(cnt%10+48);
                        cnt/=10;
                    }
                    for(int k=s.size()-1;k>=0;k--)
                        out+=s[k];
                    out+=in[i];
                    cnt=1;
                }
        }
         cout<<(che?out:in)<<endl;
    }
    return 0;
}
