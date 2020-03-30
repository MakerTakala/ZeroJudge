#include <iostream>
using namespace std;
int main(){
	int n,a,f;
	cin>>n;
	while(n--){
		cin>>a>>f;
		for(int i=1;i<=f;i++){
			for(int k=1;k<=a;k++){
				for(int j=1;j<=k;j++)
					cout<<k;
				cout<<endl;
			}
			for(int k=(a-1);k>=1;k--){
				for(int j=1;j<=k;j++)
					cout<<k;
				cout<<endl;
			}
			cout<<endl<<endl;
		}
	}
}
