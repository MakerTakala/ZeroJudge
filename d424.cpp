#include <iostream>
using namespace std;
int main(){
	int l,h,r,b[10001]={0},furthest=0;
	while(cin>>l>>h>>r){
		for(int i=l;i<r;i++){
			int highest=b[i];
			if(highest<h)
				b[i]=h;
			if(furthest<r)
				furthest=r;
		}
	}
	for(int i=0,tem=0;i<=furthest;i++){
		if(tem!=b[i]){
			cout<<i<<" "<<b[i]<<" ";
			tem=b[i];
		}
	}
return 0;
}

