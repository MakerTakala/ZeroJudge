#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
	char w[100000],word[27]={'A','B','G','D','E','#','Z','Y','H','I','K','L','M','N','X','O','P','Q','R','S','T','U','F','C','$','W','3'};
	int figure[27]{1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800,900};
	while(cin>>w){
		int sum=0;
		if(w[0]=='.')
			break;
		for(int i=0;i<strlen(w);i++){
			for(int k=0;k<27;k++){
				if(w[i]==word[k]){
					sum+=figure[k];
					break;
				}
			}
		}
		cout<<sum<<endl;
	}
return 0;
}

