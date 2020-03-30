#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,number=1;
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m);
		struct timeinfor{
			int minute,second;
		};
		timeinfor times[m];
		int minn[2]={61,61};
		for(int i=0;i<m;i++)
			cin>>times[i].minute>>times[i].second;
		for(int i=0;i<m;i++)
			if(times[i].minute<minn[0]||times[i].minute==minn[0]&&times[i].second<minn[1]){
				minn[0]=times[i].minute;
				minn[1]=times[i].second;
			}
		int average=0;
		for(int i=0;i<m;i++)
			average+=(times[i].minute*60+times[i].second);
		average/=m;
		printf("Track %d:\nBest Lap: %d minute(s) %d second(s).\nAverage: %d minute(s) %d second(s).\n",number,minn[0],minn[1],average/60,average%60);
		number++;
	}
return 0;
}

