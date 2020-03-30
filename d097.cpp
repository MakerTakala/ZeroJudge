#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int d[n]={0};
		for(int i=0;i<n;++i)
			cin>>d[i];
		bool t[n]={false};
		for(int i=1;i<n;++i){
			int x=abs(d[i-1]-d[i]);
			if(x<n)
				t[x]=true;
		}
		bool j=true;
		for(int i=1;i<=n-1;++i){
			if(!t[i]){
				j=false;
			break;
			}
		}
	cout<<(j?"Jolly":"Not jolly")<<endl;
	}
return 0;
}
