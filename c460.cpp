#include <iostream>
using namespace std;
int main()
{
    /*(0 0 0) 0
      (1 0 0) 1
      (0 1 0) 2
      (1 1 0) 3
      (0 0 1) 4
      (1 0 1) 5
      (0 1 1) 6
      (1 1 1) 7
    */
    long long int team[3][8]={{0}};
    int n,x,a,b,c;
    long long int sum=0;
    cin>>n;
    while(n--){
        cin>>x>>a>>b>>c;
        team[x-1][4*a+2*b+c]++;
    }
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            for(int k=0;k<8;k++){
                if((i|j|k)==7){
                    sum+=(team[0][i]*team[1][j]*team[2][k]);
                }

            }
    cout<<sum<<endl;

return 0;
}
