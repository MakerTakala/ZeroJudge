#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
	char w[1000];
	while(cin>>w){
		int check[27]={0};
		for(int i=0;i<strlen(w);i++){
			int x=(int)w[i];
			if(65<=x&&x<=90)
				check[x-64]++;
			if(97<=x&&x<=122)
				check[x-96]++;
		}
		bool times=false,timess=true;
		for(int i=1;i<=26;i++){
			if(check[i]%2==1){
				if(times){
					cout<<"no..."<<endl;
					timess=false;
					break;
				}
				times=true;
			}
		}
		if(timess)
			cout<<"yes !"<<endl;
	}
return 0;
}

