#include <iostream>
#include <cstdio>
using namespace std;
void hanoi(int n,char from,char save,char dir){
	if(n==1){
		printf("Move ring %d from %c to %c\n",n,from,dir);
	}
	else{
		hanoi(n-1,from,dir,save);
		printf("Move ring %d from %c to %c\n",n,from,dir);
		hanoi(n-1,save,from,dir); 
	}
}
int main(){
	int n;
	while(scanf("%d",&n)==1)
		hanoi(n,'A','B','C');
return 0;
}

