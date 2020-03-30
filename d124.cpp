#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
	char n[10002];
	while(cin>>n){
		int sum=0;
		if(n[0]!='-')
			sum+=n[0]-48;
		for(int i=1;i<strlen(n);i++)
			sum+=((int)n[i]-48);
		if(sum%3==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
return 0;
}

