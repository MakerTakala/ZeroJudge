#include <cstdio>
#include <cstring>
char x[1000001],stop[7]="STOP!!";
using namespace std;
int main(){
	int a[127],i;
	while(scanf("%s",&x)){
		if(!strcmp(x,stop))
			break;
		memset(a,0,sizeof(a));	
		for(i=0;x[i];i++)
			a[(int)x[i]]++;
		scanf("%s",&x);
		for(i=0;x[i];i++)
			a[(int)x[i]]--;
		for(i=33;i<127;i++)
			if(a[i]!=0)
				break;
		puts(i==127?"yes":"no");
	}
return 0;
}
//°Ñ¦Òºô§}:https://github.com/morris821028/UVa/blob/master/OnlineJudge/ZEROJUDGE/a275.%20%E5%AD%97%E4%B8%B2%E8%AE%8A%E8%AE%8A%E8%AE%8A.cpp 
