#include <iostream>
using namespace std;
int main()
{
	int a;
	while(cin>>a){
		if(a==0){
			cout<<0;
			continue;
		}
		while(a%10==0)
			a/=10; 
		while(a>0){
			cout<<a%10;
			a/=10;
		}
		cout<<endl;
	}
return 0;
}
