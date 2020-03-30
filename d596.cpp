#include <iostream>
using namespace std;
int main(){
	int x[9][4]={{2,4,10,10},{1,3,5,10},{2,6,10,10},{1,5,7,10},{2,4,6,8},{3,5,9,10},{4,8,10,10},{5,7,9,10},{6,8,10,10}};
	int n;
	while(cin>>n){
		while(n--){
			bool z[10]={false}; 
			bool tem=true;
			int a,b,c;
			cin>>a>>b>>c;
			for(int i=0;i<=3;i++)
				z[x[a-1][i]-1]=true;
			for(int i=0;i<=3;i++)
				z[x[b-1][i]-1]=false;
			for(int i=0;i<=3;i++)
				z[x[c-1][i]-1]=false;
			for(int i=0;i<=8;i++){
			if(z[i]==true){
					cout<<i+1<<" ";
					tem=false;
				}
			}
			if(tem==true)
				cout<<"Empty";
			cout<<endl;
		}
	}
	return 0;
}

