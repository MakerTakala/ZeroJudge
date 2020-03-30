#include <iostream>
using namespace std;
int main(){
	int n,sum,a[10]={0};
	sum=0;
	for(int i=0;i<10;i++)
		cin>>a[i];
	cin>>n;
	for(int i=0;i<10;i++){
		if(a[i]<=n+30)
			sum++;
	}
	cout<<sum<<endl;
return 0;
}
