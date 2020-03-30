#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int maxx=-1,a[n]={0};
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		cout<<a[0];
		for(int i=1;i<n;i++)
			cout<<" "<<a[i];
		cout<<endl;
		int i;
		for(i=0;a[i]<60&&i<n;i++){
			maxx=a[i];
		}
		i--;
		if(a[0]>=60)
			cout<<"best case"<<endl;
		else
			cout<<a[i]<<endl;
		if(a[n-1]<60)
			cout<<"worst case"<<endl;
		else
			cout<<a[i+1]<<endl;
		
	}
return 0;
}

