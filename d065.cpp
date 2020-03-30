#include <iostream>
using namespace std;
int main()
{
	int a,b=0,i;
	for(i=0;i<=3;i++){
		cin>>a;
		if(a>=b)
			b=a;
	}
	cout<<b;
 } 
