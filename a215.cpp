#include <iostream>
using namespace std;
int main()
{
	int n,m,sum=0,i;
	while(cin>>n>>m){
		sum=0;
		i=n;
		do{
			sum+=i;
			i++;
		}while(sum<=m);
		cout<<i-n<<endl;
	}
return 0;
}
