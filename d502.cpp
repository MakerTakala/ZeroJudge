#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,all=0;
	while(cin>>a>>b>>c>>d){
		all=d+c;
		a-=(c*37);
		all+=(b/8)+(b%8!=0);
		a=a-(64-8*(b%8));
		all=all+(a/64+((a%64)!=0))*(a>0);
		cout<<all<<endl;
		all=0;
	}
}
