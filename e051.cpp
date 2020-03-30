#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a;
	while(cin>>a){
		cout<<a[0];
		for(int i=2;i<=a.length()-1;i++)
			cout<<"_";
		cout<<a[a.length()-1];
	}
return 0;
}

