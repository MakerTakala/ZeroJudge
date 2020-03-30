#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int days(int a,int b,int c){
	int sum=(--a)*365+c;
	for(int i=0;i<b-1;i++)
		sum+=month[i];
	sum+=(a/4-a/100+a/400);//閏年(4n&&!100n||400n)
	a++;
	if(a%4==0&&a%100!=0||a%400==0)//今年是否閏年 
		if(b>2)
			sum++;	
	return sum;
}
int main(){
	int a,b,c,x,y,z;
	while(scanf("%d%d%d%d%d%d",&x,&y,&z,&a,&b,&c)!=EOF) 
		cout<<abs(days(x,y,z)-days(a,b,c))<<endl;
return 0;
}
