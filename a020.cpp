#include <iostream>
using namespace std;
int main()
{
	int sum,n,p[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	string a;
	while(cin>>a){
		sum=p[(int)a[0]-'A'];
		sum=sum/10+sum%10*9;
		for(int i=8;i>=1;i--){
			sum=sum+((int)a[9-i]-48)*i;

		}
		sum+=(int)a[9]-48;
		if((sum%10)==0)
			cout<<"real";
		else
			cout<<"fake";
		cout<<endl;
	}
}
