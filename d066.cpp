#include <iostream>
using namespace std;
int main()
{
	int h,m,all;
	cin>>h>>m;
	all=100*h+m;
	if(730<=all&&all<1700)
		cout<<"At School";
	else
		cout<<"Off School";
 }
