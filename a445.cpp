#include <iostream>
using namespace std;
int father[10001],ran[10001];
int root_find(int n){
    if(father[n]==n)
        return n;
    father[n]=root_find(father[n]);
    return root_find(father[n]);
}
int main()
{
    int n,m,q,a,b;
    for(int i=1;i<=10000;i++){
        father[i]=i;
        ran[i]=1;
    }
    cin>>n>>m>>q;
    while(m--&&cin>>a>>b){
        int fa=root_find(a),fb=root_find(b);
        if(ran[fa]<ran[fb])
            father[fa]=fb;
        else if(ran[fa]>ran[fb])
            father[fb]=fa;
        else{
            father[fa]=fb;
            ran[fb]++;
        }

    }
    while(q--&&cin>>a>>b)
        cout<<(root_find(a)==root_find(b)?":)":":(")<<endl;
return 0;
}
