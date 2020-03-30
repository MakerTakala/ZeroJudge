#include <iostream>
using namespace std;
int main()
{
	int a,i,k,s[100]={0};
	while(cin>>a)
	{
		k=0;
		for(i=0;a>=1;i++)
		{

			s[i]=a%2;
			a=a/2;
			k++;
		}
		for(i=(k-1);i>=0;i--)
			cout<<s[i];
        cout<<endl;
	}
}
