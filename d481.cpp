#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	while(cin>>a>>b>>c>>d){
		if(b==c){
			long long int alist[a][b],blist[c][d];
			for(int i=0;i<a;i++){
				for(int k=0;k<b;k++)
					cin>>alist[i][k];
			}
			for(int i=0;i<c;i++){
				for(int k=0;k<d;k++)
					cin>>blist[i][k];
			}
			cout<<endl;
			long long int ans[a][d];
			for(int i=0;i<a;i++){
				for(int k=0;k<d;k++){
					ans[i][k]=0;
					for(int j=0;j<b;j++)
						ans[i][k]+=(alist[i][j]*blist[j][k]);
				}
			}
			for(int i=0;i<a;i++){
				for(int k=0;k<d;k++)
					cout<<ans[i][k]<<" ";
				cout<<endl;
			}
		}
		else
			cout<<"Error"<<endl;
	}
return 0;
}

