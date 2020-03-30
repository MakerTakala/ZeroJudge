#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int n[26]={1,10,19,28,37,46,55,64,39,73,82,2,11,20,48,29,38,47,56,65,74,83,21,3,12,30};
	int x,p[9];
	 while(cin>>x){
        int sum=0;
        for(int i = 0;i<9;i++){
            p[i] = x%10;
            x=x/10;
        }
        for(int i=1;i<9;i++)
        	sum+=p[i]*i;
        for(int i=0; i<26; i++){
            if( (sum+n[i]+p[0])%10 == 0 ){
                cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}
