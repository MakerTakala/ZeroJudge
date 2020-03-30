#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	char a[14];
	while(cin>>a){
		int sum=a[0]-48;
		for(int i=2;i<=4;i++)
			sum+=(a[i]-48)*i;
		for(int i=6;i<=10;i++)
			sum+=(a[i]-48)*(i-1);
		if(sum%11==a[12]-48||sum%11==10&&a[12]=='X')
			cout<<"Right"<<endl;
		else{
			for(int i=0;i<=11;i++)
				cout<<a[i];
				if(sum%11==10)
					cout<<"X"<<endl;
				else 
					cout<<sum%11<<endl;
		}		
	}
return 0;
}

