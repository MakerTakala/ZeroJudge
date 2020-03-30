#include <iostream>
using namespace std;
int main()
{
	int a,b,c,x=0;
	while(cin>>a>>b>>c){
		x=0;
		if(((a>0)&&(b>0))==c){
			x++;
			cout<<"AND"<<endl;
		}
		if(((a>0)||(b>0))==c){
			x++;
			cout<<"OR"<<endl;
		}
		if(((a>0)^(b>0))==c){
			x++; 
			cout<<"XOR"<<endl;
		}
		if(x==0)
			cout<<"IMPOSSIBLE";
		
	}
}
