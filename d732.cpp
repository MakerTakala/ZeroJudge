#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int d(int num[],int q,int n){
    int l=0,r=n,m;
    while(l<=r){
        m=(l+r)/2;
        if(num[m]==q)
            return m+1;
        else if(num[m]>q)
            r=m-1;
        else
            l=m+1;
    }
    return 0;
}
int main(){
    int n,k,q;
    while(cin>>n>>k){
        int num[n];
        for(int i=0;i<n;i++)
            cin>>num[i];
        for(int i=0;i<k;i++){
            cin>>q;
            cout<<d(num,q,n)<<endl;
        }
    }
return 0;
}
