#include <iostream>
using namespace std;
int a[10][10],b[10][10];
int main(){
	int op[10],R,C,M;
	while (cin>>R>>C>>M){
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<M;i++) cin >> op[i];
		for(int i=M-1;i>=0;i--){
			if (op[i]==1){
				for(int i=R-1;i>=0;i--){
					for(int j=0;j<C;j++)
						b[(R-1)-i][j]=a[i][j];
				}
				for(int i=0;i<R;i++){
					for(int j=0;j<C;j++)
						a[i][j]=b[i][j];
				}
			}
			else{
				for(int i=C-1;i>=0;i--){
					for(int j=0;j<R;j++)
						b[(C-1)-i][j]=a[j][i];
				}
				for(int i=0;i<C;i++){
					for(int j=0;j<R;j++)
						a[i][j]=b[i][j];
				}
				int tmp=R;
				R=C;
				C=tmp;
			}
		}
		cout<<R<<" "<<C<<endl;
	    for(int i=0;i<R;i++){
		    cout<<a[i][0];
		    for(int j=1;j<C;j++){
			    cout<<" "<<a[i][j];
	    	}
		    cout<<endl;
	    }	
	}
} 

