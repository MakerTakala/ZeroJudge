#include <iostream>
using namespace std;
int main(){
	int n,i,k;
	while(cin>>n){
		for(i=1;i<=n;i++){
			for(k=1;k<=n-i;k++)
				cout<<"_";
			for(k=1;k<=2*i-1;k++)
				cout<<"*";
			for(k=1;k<=n-i;k++)
				cout<<"_";
			cout<<endl;
		}
	}
}
