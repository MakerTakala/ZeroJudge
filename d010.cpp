#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	while(cin>>n){
		sum=0;
		for(int i=1;i<=n/2;i++){
			if(!(n%i))
				sum+=i;
		}
		if(sum>n)
			cout<<"�ռ�";
		else if(sum<n)
			cout<<"����";
		else
			cout<<"������";
		cout<<endl;
	}
return 0;
}

