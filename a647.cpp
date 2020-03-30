#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n,m,p;
    double worth;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&m,&p);
        worth=((double)p/m-1)*100;
        double tem=worth;
		if(worth>0)
			worth+=0.00001;
		if(worth<0)
			worth-=0.00001;
        worth=round(worth*100)/100;
        cout<<fixed<<setprecision(2)<<worth<<"%"<<" ";
        cout<<(tem>=10||tem<=-7?"dispose":"keep")<<endl;
    }
return 0;
}
