#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	int n,m,l,r,f[100000];
	while(scanf("%d %d",&n,&m)!=EOF){
		f[100000]={0};
		int i;
		for(i=1;i<=n;i++){
			cin>>f[i];
			f[i]=f[i-1]+f[i];
		}
		for(i=0;i<m;i++){
			cin>>l>>r;
			cout<<f[r]-f[l-1]<<endl;
		}
	}
return 0;
}
