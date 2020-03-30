#include <iostream>
using namespace std;
int main()
{
	long long int a,b,c;
	while(cin>>a>>b>>c){
		if(a>b+c||(b>a&&a>c&&b<a+c)||(c>a&&a>b&&c<a+b))
			cout<<"A";
		else if(b>a+c||(a>b&&b>c&&a<b+c)||(c>b&&b>a&&c<a+b))
			cout<<"B";
		else
			cout<<"C";
		cout<<endl;
	}
}

