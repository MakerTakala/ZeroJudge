#include <iostream>
#include <cstdlib>
using namespace std;
int cl(int n){
	int i=1;
	while(n!=1){
		if(n%2==1)
			n=n*3+1;
		else
			n=n/2;
		i++;
	}
	return i;
}
int main(){
	int i,j;
	while(cin>>i>>j){
		int maxx=-1;
		for(int k=min(i,j);k<=max(i,j);k++)
			maxx=max(maxx,cl(k));
		printf("%d %d %d\n",i,j,maxx);
	}
	return 0;
}
