#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b){
		if(a==0||a>=b&&b>0&&a%b==0)
			cout<<"Ok!";
		else
			cout<<"Impossib1e!";
		cout<<endl;
		}
}

