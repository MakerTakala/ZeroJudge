#include <iostream>
using namespace std;
int main(void)
{
	int amount=0,times=0;
	cin>>amount;
	while(times<amount)
	{
		int a1,a2,a3,a4,a5,d;
		cin>>a1>>a2>>a3>>a4;
		if((a2-a1)==(a3-a2))
			{
			d=a2-a1;
			a5=a4+d;
			}
		else
			{
			d=a2/a1;
			a5=a4*d;
			}
		cout<<a1<<' '<<a2<<' '<<a3<<' '<<a4<<' '<<a5<<endl;
		times++;
	}
return 0;
}
