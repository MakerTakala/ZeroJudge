#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main(){
	int t;
	string a;
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin,a);
		int sum=0,i=1,s=a[0]-48;
		while(i<a.size()){
			if(isdigit(a[i])){
				s=s*10+(a[i]-48);
				i++;
			}
			else{
				sum+=s;
				s=0;
				i+=3;	
			}	
		}		
	cout<<sum+s<<endl;
	}
return 0;
}
