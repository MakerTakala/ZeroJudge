#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
	char a[100];
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int m=0,f=0;
		cin.getline(a,100);
		for(int i=0;i<strlen(a);i++){
			if(a[i]=='M')
				m++;
			else if(a[i]=='F')
				f++;
		}
		if(m==f&&strlen(a)>=3)
			cout<<"LOOP"<<endl;
		else
			cout<<"NO LOOP"<<endl;
	}
return 0;
}

