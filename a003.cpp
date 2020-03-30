#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
		if((a*2+b)%3==0)
			cout<<"´¶³q"<<endl;
		if((a*2+b)%3==1)
			cout<<"¦N"<<endl;
		if((a*2+b)%3==2)
			cout<<"¤j¦N"<<endl;
	return 0;
 } 
