#include <iostream>
using namespace std;
int main()
{
	long long int a;
	while(cin>>a){
		a=a/2;
		cout<<(a/2)*((a%2==1)+(a/2))<<endl;
	}	
}

