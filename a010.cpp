#include <iostream>
using namespace std;
int main()
{
	int a,a1;
	while(cin>>a)
	{
		int i;
		a1=a;
		for (i=2;i<=a;i++)
		{
			int k=1;
			if((a1%i)==0)
			{
				for (k=0;(a1%i)==0;k++)
					a1=a1/i;
				if(k==1)
					cout<<i;
				else
					cout<<i<<"^"<<k;
				if(a1!=1)
					cout<<" * ";		
			}
		if(a1==1)
			break;
		}
	cout<<endl;
	}
}
