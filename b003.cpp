#include <iostream> 
#include <cmath>
using namespace std; 
int main()
{
    int k,n,sum;
    while(cin>>k){
    	k=abs(k);
        for(n=1,sum=0;sum<k;n++)
            sum+=n;
		n--;
		while(((sum-k)%2)!=0){
            n++;
            sum+=n;
    	}
        cout<<n<<endl;
    }
    return 0;
}

