#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int password[4]={0},guess[4]={0};
	while(scanf("%d %d %d %d",&password[0],&password[1],&password[2],&password[3])==4){
		int t;
		scanf("%d",&t);
		while(t--){
			bool check[4],checkpassword[4]={false},checkinput[4]={false};
			int a=0,b=0;
			for(int i=0;i<4;i++){
				scanf("%d",&guess[i]);
				if(password[i]==guess[i]){
					a++;
					check[i]=true;
				}
				else
					check[i]=false;
			} 
			for(int i=0;i<4;i++){
				for(int k=0;k<4;k++){
					if((i!=k)&&(!check[i])&&(!check[k])&&(!checkpassword[i])&&(!checkinput[k])){
						if(password[i]==guess[k]){
							b++;
							checkpassword[i]=true;
							checkinput[k]=true;
							break;
						}	
					}
				}
			}
			printf("%dA%dB\n",a,b);
		}
	}
return 0;
}

