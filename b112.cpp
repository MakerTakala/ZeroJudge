#include <iostream>
using namespace std;
int gcd(int x,int y){
	int r;
	do{
		r=x%y;
		x=y;
		y=r;		
	}while(r!=0);
	return x;
}
int main(){
	int n,a,g;
	while(cin>>n){
		cin>>g;
		for(int i=1;i<n;i++){
			cin>>a;
			g=gcd(g,a);
		}
		cout<<g<<endl;
	}
return 0;
}

