#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--){
        char per;
        int cnt=0,p=0;
        while(1){
            per=getchar();
            if(per=='\n')
                break;
            else if(per=='p')
                p++;
            else if(per=='q'&&p>0){
            	cnt++;
            	p--;
			}
        }
        cout<<cnt<<endl;
    }
return 0;
}
