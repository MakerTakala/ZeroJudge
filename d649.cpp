#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a;
	while(cin>>a){
		for(int i=1;i<=a;i++){
			for(int j=a-i-1;j>=0;j--)
				cout<<"_";
			for(int k=1;k<=i;k++)
				cout<<"+";
			cout<<endl;
		}
	}
return 0;
}

