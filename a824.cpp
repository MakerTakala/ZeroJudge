#include <iostream>
using namespace std;
int main()
{
	int a,b,c,sum;
	char x;
	while(cin>>a>>b>>c){
		for(int i=1;i<=c;i++){
			if(i%a==0||i%b==0)
				sum+=i; 
		}
		sum=64+sum%26;
		cout<<(char)sum;
	}
return 0;
}

