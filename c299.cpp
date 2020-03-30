#include <iostream>
using namespace std;
int main()
{
	int n,max,min,mi;
	cin>>n>>min;
	max=min;
	for(int i=1;i<=n-1;i++){
		cin>>mi;
		if(mi<min)
			min=mi;
		if(mi>max)
			max=mi;
	}
	cout<<min<<" "<<max;
	if(max-min==(n-1))
		cout<<" yes";
	else
		cout<<" no";
return 0;
}

