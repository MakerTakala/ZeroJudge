#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n]={0};
	for(int i=0;i<n;i++)
		cin>>a[i];
	int count=0,dif=0,r=0,l=0;
	dif+=(a[l]-a[n-1-r]);
	r=1,l=1;
	for(int i=1;l<=n&&r>=0;i++){
		if(dif<0){
			dif+=a[l];
			l++;
		}
		else if(dif>0){
			dif-=a[n-1-r];
			r++;
		}	
		else{
			dif+=(a[l]-a[n-1-r]);
			count++,l++,r++;
		}
	}
	cout<<count;
return 0;
}

