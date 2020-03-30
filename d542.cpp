#include <iostream>
using namespace std;
#define N 500005
int x[N],y[N];
long long int mergesort(int l,int r,int* a,int* b) {
	if(r-l==1)
        return 0;
	int m=(l+r)/2;
	long long int ans=mergesort(l,m,a,b)+mergesort(m,r,a,b);
	int c=l,d=m,e=l;
	while (c<m||d<r){
		if(d>=r||(c<m&&a[c]<=a[d]))
            b[e++]=a[c++];
		else{
			ans+=m-c;
			b[e++]=a[d++];
		}
	}
	for(int i=l;i<r;i++)
        a[i]=b[i];
	return ans;
}
int main()
{
    int n;
	while (cin>>n&&n) {
		for (int i=0;i<n;i++)
            cin>>x[i];
		cout<<mergesort(0,n,x,y)<<endl;
	}
	return 0;
}
