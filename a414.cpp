#include <iostream>
#include <algorithm>
using namespace std;
struct xyline{
	int x,y;		
}t[1000];
bool cmp(xyline a,xyline b){
	if(a.x!=b.x)
		return a.x<b.x;
	else
		return a.y<b.y;
}
int main(){
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
		cin>>t[i].x>>t[i].y;
	sort(t,t+a,cmp);
	for(int i=0;i<a;i++)
		cout<<t[i].x<<" "<<t[i].y<<endl;;
return 0;
} 
