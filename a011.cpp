#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string line;
	while(getline(cin,line)){
		int sum=0;
		for(int i=0;i<line.size();i++)
			if(isalpha(line[i])&&!isalpha(line[i-1]))
				sum++;
		cout<<sum<<endl;
	}
}
