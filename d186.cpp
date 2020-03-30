#include <iostream>
int i;
int pow(int x){
	int count=0;
	for(i=1;i*i<=x;i++)
		count++;
	return count;
}
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b,a!=0&&b!=0)
		cout<<pow(b)-pow(a)+(a==(i-1)*(i-1))<<endl;
return 0;
}

