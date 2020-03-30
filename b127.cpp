#include <iostream>
using namespace std;
int main(){
	int n,a[46]={1,1};
	for(int i=2;i<=45;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(cin>>n)
		cout<<a[n]<<endl;
return 0;
}

