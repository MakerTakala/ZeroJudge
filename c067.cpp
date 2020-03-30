#include <iostream>
using namespace std;
int main(void)
{
	int pile,times=0,a[10];
	while(cin>>pile&&pile!=0)
        {
		int move=0,all=0,i;
		for(i=0;i<=(pile-1);i++)
		{
			cin>>a[i];
			all+=a[i];
		}
		all=all/pile;
		for(i=0;i<=(pile-1);i++)
		{
			if(a[i]<all)
				move=move+(all-a[i]);
		}
                times++;
	    cout<<"Set #"<<times<<endl<<"The minimum number of moves is "<<move<<"."<<endl;
	}
}
