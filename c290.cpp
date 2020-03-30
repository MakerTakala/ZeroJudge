#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	string n;
	while(cin>>n){
		int sum1=0,sum2=0;
		for(int i=0;i<n.size();i++){
			if((i+1)%2==1)
				sum1+=n[i]-'0';
			else
				sum2+=n[i]-'0';
		}
		cout<<abs(sum1-sum2)<<endl;
	}
return 0;
}
