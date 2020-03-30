#include <iostream>
#include <algorithm> 
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int a[8]={8,7,6,5,4,3,2,1};
		do{
			for(int i=8-n;i<8;i++)
				printf("%d",a[i]);
			printf("\n");
		}while(prev_permutation(a+(8-n),a+8)); 
	}
return 0;
}

