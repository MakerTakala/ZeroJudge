#include <iostream>
using namespace std;
int main()
{
	int n,ori,high=0,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>ori;
		if(ori>high)
			high=ori;
	}
	cout<<high;
}

