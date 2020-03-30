#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	string a;
	while(cin>>a){
		bool check=true;
		for(int i=0;i<=(a.length()-1)/2;i++){
			int x=a.length()-1-i;
			if(a[i]!=a[x]){
				cout<<"no"<<endl;
				check=false;
				break;
			}
		}
		if(check)
			cout<<"yes"<<endl;
	}
}
