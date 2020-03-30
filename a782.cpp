#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string line;
	while(getline(cin,line)&&!(line=="END")){
		int last;
		cout<<(char)toupper(line[0]);
		for(int i=0;i<line.size();i++)
			if(line[i]==' '){
				cout<<(char)toupper(line[i+1]);
				last=i+1;
			}
		cout<<" ";
		for(int i=last;i<line.size();i++)
			cout<<line[i];
		cout<<endl;
	}
}
