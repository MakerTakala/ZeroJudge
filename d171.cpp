#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long int n,m;
	while(cin>>n>>m)
		cout<<floor(m*log10(n)+1)<<endl;
	return 0;
}
