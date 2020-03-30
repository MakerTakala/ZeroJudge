#include <iostream>
#include <cstdio>
using namespace std;
int a[10001],b[10001];
int main(){
	int m,n,count;
	scanf("%d %d",&n,&m);
	for(int j=1;j<=n;j++){
		count=0;
		for(int i=0;i<m;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<m;i++)
			scanf("%d",&b[i]);
		int k=0;
		for(int i=0;i<m;){
			if(a[i]==b[k]){
				count++;
				i++;
				k++;
			}
			else if(a[i]>b[k])
				k++;
			else
				i++;
			if(k==m)
				break;
		}
	printf("%d\n",count);
	}
return 0;
}

