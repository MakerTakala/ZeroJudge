#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m){
		bool ans=true;
		for(int i=n;i<=m;i++){
			int count,sum=0,tem=i;
			count=log(i)/log(10)+1;
			for(int k=1;k<=count;k++){
				sum+=pow(tem%10,count);
				tem/=10;
			}
			if(sum==i){
				cout<<i<<" ";
				ans=false;
			}
		}
		if(ans)
			cout<<"none";
		cout<<endl;
	}
	return 0;
}

