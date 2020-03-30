#include <iostream>
using namespace std;
int main()
{
	int i,a=1;
	cin>>a;
	for(i=1;a!=0;i++)
	{

		if((a%4)==0&&(a%100)!=0||(a%400)==0)
			cout<<"a leap year"<<endl;
		else
			cout<<"a normal year"<<endl;
		cin>>a;
	}
 }
