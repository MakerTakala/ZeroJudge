#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,a;
	while(scanf("%d",&n)==1){
		double sum=0;
		for(int i=0;i<n;i++){
			cin>>a;
			sum+=a;
		}
		sum/=n;
		if(sum>59)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
return 0;
}

