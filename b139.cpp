#include <iostream>
using namespace std;
int main()
{
	int l,m,a,b,sum;
	while(cin>>l>>m){
		sum=0;
		int tree[l+1]={0};
		while(m--){
			cin>>a>>b;
			for(int i=a;i<=b;i++)
				tree[i]=1;
		}
		for(int i=0;i<=l;i++){
			if(tree[i]==0)
				sum++;
		}
		cout<<sum<<endl;
	}
return 0;
}

