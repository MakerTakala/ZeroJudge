#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	char n[7];
	while(cin>>n){
		for(int i=1;i<7;i++)
			cout<<abs((int)n[i]-n[i-1]);
		cout<<endl;
	}
return 0;
}

