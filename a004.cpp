#include <iostream>
using namespace std;
int main()
{
	int a;
	while(cin>>a)
	if(a%400==0||a%4==0&&a%100!=0){
		if (a<=0)
			cout<<"�榡���~"<<endl;
		else
			cout<<"�|�~"<<endl;
		}
	else
		cout<<"���~"<<endl;
}
