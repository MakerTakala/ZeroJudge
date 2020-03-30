#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
double s(double a ,double b,double c){
	double s=(a+b+c)/2*100;
	s=round(s)/100;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
using namespace std;
int main(){
	int t,n,i;
	double lon[100000];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			cin>>lon[i];
		sort(lon,lon+n);
		bool check=true;
		for(i=n;i>=3;i--)
			if(lon[i-2]+lon[i-3]>lon[i-1]&&lon[i-1]-lon[i-3]<lon[i-2]){
				cout<<fixed<<setprecision(2)<<s(lon[i-1],lon[i-2],lon[i-3])<<endl;
				i++;
				check=false;
				break;
			}
		if(check)
			cout<<"0.00"<<endl;
	}
return 0;
}

