#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	char anc[1000],ori[1000];
	while(scanf("%s %s",&ori,&anc)==2){
		if((int)anc[0]>=(int)ori[0])
			cout<<(int)anc[0]-ori[0]<<endl;
		else
			cout<<26-((int)ori[0]-anc[0])<<endl;
	}
return 0;
}

