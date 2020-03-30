#include <iostream>
#include <cstdio>
#include <algorithm> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[40000]={0};
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		cout<<a[n/2+(n%2==1)-1]<<endl;
	}
return 0;
}

