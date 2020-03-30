#include <iostream>
using namespace std;
int main()
{
	int a;
	while(cin>>a)
		cout<<(-a*2)*(a<0)+((a*2)*(a>0)-(a>0))<<endl;
}

