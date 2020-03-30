#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	char x[10001];
	int t;
	cin>>t;
	cin.ignore();
	memset(x,0,sizeof(x));
	while(t--){
		cin.getline(x,10001);
		int length=sqrt(strlen(x));
		if(pow(length,2)==strlen(x)){
			for(int i=0;i<length;i++){
				for(int k=0;k<length;k++){
					cout<<x[length*k+i];
				}
			}
			cout<<endl;
		}
		else
			cout<<"INVALID"<<endl;
	}
return 0;
}

