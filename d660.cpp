#include <iostream>
using namespace std;
int main()
{
	int t,n,h,l,pre,now,tem,count=0;
	cin>>t;
	while(t--){
		count++;
		cin>>n;
		h=0;
		l=0;
		if(n==1){
			cin>>pre;
			cout<<"Case "<<count<<": 0 0"<<endl;
		}
		else{
			cin>>pre>>now;
			for(int i=2;i<n;i++){
				h+=(now>pre);
				l+=(now<pre);
				tem=now;
				cin>>now;
				pre=tem;
			}
				h+=(now>pre);
				l+=(now<pre);
			cout<<"Case "<<count<<": "<<h<<" "<<l<<endl;
		}
	}
return 0;
}

