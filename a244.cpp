#include <iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	int i;
	for(i=1;i<=n;i++){
		cin>>a>>b>>c;
		if(a==1)
			cout<<b+c;
		else if(a==2)
			cout<<b-c;
		else if(a==3)
			cout<<(long int)b*c;
		else
			cout<<b/c;
		cout<<endl;
	}
}

