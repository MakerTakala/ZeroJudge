#include <iostream>
using namespace std;
void swap(int& x,int& y){
	int t;
	t=x;
	x=y;
	y=t;
}
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c){
        if(a>c)
            swap(a,c);
        if(b>c)
            swap(b,c);
        if(a>b)
            swap(a,b);
        cout<<a<<" "<<b<<" "<<c<<endl;
        if(a+b<=c)
            cout<<"No"<<endl;
        else if(a*a+b*b<c*c)
            cout<<"Obtuse"<<endl;
        else if(a*a+b*b==c*c)
            cout<<"Right"<<endl;
        else
            cout<<"Acute"<<endl;
    }
    return 0;
}
