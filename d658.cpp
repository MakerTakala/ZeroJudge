#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,times=1;
	while(cin>>n){
		if(n>=0){
			cout<<"Case "<<times<<": "<<ceil(log2(n))<<endl;
			times++;	
		}
		else
			break;
	}
}
