#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[201];
	while(cin>>a){
		int sum=0;
		bool check=1;
		if(a[0]=='0'&&a[1]=='\0')
			break;
		else{
			for(int i=0;i<strlen(a);i++){
				if(isalpha(a[i])){
					a[i]=tolower(a[i]);
					sum+=a[i]-96;
				}
				else{
					check=0;
					cout<<"Fail"<<endl;
					break;
				}
			}
			if(check)
				cout<<sum<<endl;
		}
	}
return 0;
}

