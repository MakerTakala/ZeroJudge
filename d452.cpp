#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	while(n--){
		cin>>m;
		int a[m]={0};
		for(int i=0;i<m;i++)
			cin>>a[i];
		sort(a,a+m);
		int middle=a[m/2],sum=0;
		for(int i=0;i<m;i++)
			sum+=abs(middle-a[i]);
		cout<<sum<<endl;
	}
return 0;
}

