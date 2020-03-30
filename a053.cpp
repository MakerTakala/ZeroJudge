#include <iostream>
using namespace std;
int main()
{
	int a,ans;
	while(cin>>a)
 	{
 		if(a<=10)
			ans=6*a;
 		else if(a<=20)
 			ans=60+(a-10)*2;
 		else if(a<=40)
 			ans=80+(a-20)*1;
 		else
 			ans=100;
		cout<<ans<<endl;
	}

 }
