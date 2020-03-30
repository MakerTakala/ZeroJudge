#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	while(1){
		char n[1000]={0};
		cin>>n;
		if(n[0]!='0'){
			int sum1=0,sum2=0;
			for(int i=0;i<strlen(n);i++){
				if((i+1)%2==1)
					sum1+=n[i]-'0';
				else
					sum2+=n[i]-'0';
			}
			if((abs(sum2-sum1)%11)==0)
				cout<<n<<" is a multiple of 11."<<endl;
			else
				cout<<n<<" is not a multiple of 11."<<endl;
		}
		else
			break;
	}
return 0;
}

