#include <iostream>
using namespace std;
int main()
{
	int a,b,c,x=0,i=5;
	while(cin>>a>>b>>c&&i--){
		if(a+b>c&&b+c>a&&a+c>b)
			x++;
	}
	cout<<x;
}

