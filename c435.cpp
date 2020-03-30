#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int a[n]={0};
		for(int i=0;i<n;i++)
			cin>>a[i];
		int max=0;
		int ans=0;
		for(int i=0,j;i<n;i++){
			if(a[i]>max)
				max=a[i];
			if(max-a[i]>ans)
				ans=max-a[i];
		}
		cout<<ans;
	} 
return 0;
}

