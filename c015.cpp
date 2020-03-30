#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
void mirror(int& x){
	int y=x;
	x=0;
	while(y!=0){
		x=x*10+y%10;
		y/=10;
	}
}
bool test(int a){
	int b=a;
	mirror(a);
	if(10<=b&&b<=99)
		return false;
	else if(b!=a)
		return true;
	else
		return false;
}
int main(){
	int t,x;
	cin>>t;
	while(t--){
		int times=0;
		cin>>x;		
		do{
			int y=x;
			mirror(x);
			times++;
			x+=y;
		}while(test(x));
		cout<<times<<" "<<x<<endl;
	}	
	return 0;
} 
