#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int ascii[26],t;
	char x[201];
	cin>>t;
	cin.ignore();
	while(t--){
		memset(ascii,0,sizeof(ascii));
		cin.getline(x,201);
		for(int i=0;i<strlen(x);i++)
			if(isalpha(x[i])){
				x[i]=tolower(x[i]);
				ascii[x[i]-97]++;
			}
		int mix=0;
		for(int i=0;i<26;i++)
			if(ascii[i]>mix)
				mix=ascii[i]; 
		for(int i=0;i<26;i++)
			if(ascii[i]==mix)
				cout<<(char)(i+97);	
		cout<<endl;
	}
return 0;
}

