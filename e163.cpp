#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int f(int x){
	if(x>=65&&x<=90)
		x-=65;
	else if(x>=97&&x<=122)
		x-=71;
	else if(x>=48&&x<=57)
		x+=4;
	else if(x==43)
		x+=19;
	else if(x==47)
		x+=16;
	return x;
}
int main(){
	int n,m,b[200];
	string a;
	scanf("%d %d",&n,&m);
	cin.ignore();
	while(n--){
		getline(cin,a);
		for(int i=0;i<m/6;i++){
			b[i]=(int)a[i];
			b[i]=f(b[i]);
		}
		for(int i=0;i<m/6;i++){
			int t[6]={0},k=0;
			while(b[i]!=0){
				t[k]=b[i]%2;
				b[i]/=2;
				k++;
			}	
			for(int j=5;j>=0;j--)
				cout<<t[j];
		}
		cout<<endl;
	}
return 0;
}

