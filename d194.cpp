#include <iostream>
#include <set>
#include <cstdio>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        set<int> s;
        scanf("%d",&n);
        int maxlen=0,a[n],l=0,r=0;
        for(int i=0;i<n;i++)
			cin>>a[i];
        while(r<n){
            if(s.count(a[r])==0){
                s.insert(a[r]);
                r++;
                maxlen=max(maxlen,r-l);
            }
            else{
                while(s.count(a[r])>0){
                    s.erase(a[l]);
                    l++;
                }
            }
        }
    cout<<maxlen<<endl;
    }
return 0;
}
