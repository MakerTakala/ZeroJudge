#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long int n,i=1,tem,count=0;
	while(cin>>n){
		count=0;
		tem=n;
		for(i=1;pow(5,i)<=n;i++){
			tem=n;
			count+=(tem/pow(5,i));
		}
		cout<<count<<endl;
	}
return 0;
}
