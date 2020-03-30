#include <iostream>
using namespace std;
int main()
{
	int i;
	double k,sum;
	while(cin>>k){
		for(i=2,sum=1;sum<=k;i++){
			sum+=(double)1/i;
		}
		cout<<(int)i-1<<endl;
	}
return 0;
}

