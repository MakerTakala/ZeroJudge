#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	int x;
	char n[100000];
	while(cin>>x>>n){
		int a=0,b=0;//a進位轉換     b總和 
		for(int i=0;i<strlen(n);i++){
			a+=(n[i]-48)*pow(x,strlen(n)-1-i);
			b+=pow(n[i]-48,strlen(n)); 	
		}
		if(a==b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl; 
	}
return 0;
}

