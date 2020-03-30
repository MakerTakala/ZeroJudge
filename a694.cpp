#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,m,tem;
	while(scanf("%d %d",&n,&m)!=EOF){
		int a[n+1][n+1]={0};
		for(int i=0;i<=n;i++){
			a[0][i]=0;
			a[i][0]=0;
		}
		for(int i=1;i<=n;i++){
			for(int k=1;k<=n;k++){
				cin>>tem;
				a[i][k]=a[i][k-1]+tem;
			}
		}
		int x1,y1,x2,y2,sum=0;
		for(int j=0;j<m;j++,sum=0){
			cin>>x1>>y1>>x2>>y2;
			for(int k=x1;k<=x2;k++){
				sum+=a[k][y2]-a[k][y1-1];
			}
			cout<<sum<<endl;
		}
	}
return 0;
}
