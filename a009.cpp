#include <iostream>
using namespace std;
int main(){
	char a[100000];
	while(cin>>a){
		int i=0,n;
		while(a[i]!='5'){
			n=(int)a[i]-7;
			cout<<(char)n;
			i++;
		}
		cout<<"."<<endl;
	}
}
