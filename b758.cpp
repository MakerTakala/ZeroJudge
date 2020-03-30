#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int hou,min;
	while(scanf("%d %d",&hou,&min)!=EOF){
		hou=hou+2;
		min=min+30;
		if(min>=60){
			min-=60;
			hou++;
		}
		if(hou>=24)
			hou-=24;
		cout<<(hou>=10?"":"0")<<hou<<":"<<(min>=10?"":"0")<<min<<endl;
			
	}
return 0;
}

