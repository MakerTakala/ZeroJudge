#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int segment=0,complete=0;
        bool circle[n+1][n+1]={false};
        for(int i=0;i<n;i++){
            circle[0][i]=true;
            circle[i][0]=true;
        }
        for(int i=1;i<n;i++)
            for(int j=1;j<n;j++)
                if(i*i+j*j<=(float)(n-0.5)*(n-0.5))
                    circle[i][j]=true;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(circle[i][j]&&circle[i][j+1]&&circle[i+1][j]&&circle[i+1][j+1])
                    complete++;
                else if(circle[i][j]||circle[i][j+1]||circle[i+1][j]||circle[i+1][j+1])
                    segment++;
        cout<<"In the case n = "
        <<n<<", "
        <<segment*4
        <<" cells contain segments of the circle."
        <<endl
        <<"There are "
        <<complete*4
        <<" cells completely contained in the circle."
        <<endl<<endl;
    }
return 0;
}
