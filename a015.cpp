#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int r,c;
	while(cin>>r>>c){
		int a[r][c];
		for(int i=0;i<r;i++){
			for(int k=0;k<c;k++)
				cin>>a[i][k];
		}
		for(int i=0;i<c;i++){
			for(int k=0;k<r;k++)
				cout<<a[k][i]<<" ";
			cout<<endl;
		}
	}
return 0;
}

