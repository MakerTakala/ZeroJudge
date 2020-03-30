#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
bool prime(int x){
	if(x==1)
		return true;
	for(int i=2;i<x;i++)
		if(x%i==0){
			return false;
			break;
		}
	return true;
}
int main(){
	string w;
	while(cin>>w){
		int sum=0;
		for(int i=0;i<w.length();i++){
			if(65<=w[i]&&w[i]<=90)
				sum+=w[i]-38;
			else
				sum+=w[i]-96;
		}
		cout<<(prime(sum)?"It is a prime word.":"It is not a prime word.")<<endl;
	}
return 0;
}
