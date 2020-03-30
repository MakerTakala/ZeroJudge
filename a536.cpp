#include <iostream>
using namespace std;
int main(){
	int n,e,f,c,sum,pre;
	cin>>n;
	for(int i=1;i<=n;i++,sum=0){
		cin>>e>>f>>c;
		e+=f;
		while(e>=c){
			pre=e/c;
			sum+=pre;
			e=e%c+pre;
		}
		cout<<sum<<endl;
	}
return 0;
}
