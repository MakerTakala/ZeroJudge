#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,count=0;
	while(cin>>n){
		count++;
		int b2[n]={0};
		bool s[20001]={false};
		for(int i=0;i<n;i++)
			cin>>b2[i];
		bool check=false;
		for(int i=0;i<n;i++){
			for(int k=i;k<n;k++){
				if(s[b2[i]+b2[k]]){
					printf("Case #%d: It is not a B2-Sequence.\n\n",count);
					check=true;
					break;
				}
				else
					s[b2[i]+b2[k]]=true;
			}
			if(check)
				break;
		}
		if(!check)
			printf("Case #%d: It is a B2-Sequence.\n\n",count);
	}
return 0;
}

