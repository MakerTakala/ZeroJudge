#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int a[n+1][n+1],w=1;
		for(int i=0;i<(n+1)/2;i++){
			for(int k=0;k<n-1-i*2;k++)
				a[i][i+k]=w++;
			for(int k=0;k<n-1-i*2;k++)
				a[i+k][n-1-i]=w++;
			for(int k=0;k<n-1-i*2;k++)
				a[n-1-i][n-1-i-k]=w++;
			for(int k=0;k<n-1-i*2;k++)
				a[n-1-i-k][i]=w++;
		}
		if(n%2){
			a[n/2][n/2]=w; 
		}
		for(int i=0;i<n;i++){
			for(int k=0;k<n;k++){
				if(m==1)
					printf("%5d",a[i][k]);
				else
					printf("%5d",a[k][i]);
			}
			cout<<endl;
		}
	}
	
return 0;
}

