#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int x[9][9];
    for(int i=0;i<9;i++)
        for(int k=0;k<9;k++)
            cin>>x[i][k];
    bool error=false;
    //橫排
    for(int i=0;i<9;i++){
        set<int> s;
        for(int k=0;k<9;k++)
            s.insert(x[i][k]);
        vector<int> v(s.begin(),s.end());
        for(int k=0;k<9;k++)
            if(k+1!=v[k])
                error=true;
    }
    //豎排
    for(int i=0;i<9;i++){
        set<int> s;
        for(int k=0;k<9;k++)
            s.insert(x[k][i]);
        vector<int> v(s.begin(),s.end());
        for(int k=0;k<9;k++)
            if(k+1!=v[k])
                error=true;
    }
    //九宮格
    for(int i=0;i<3;i++)
        for(int k=0;k<3;k++){
            set<int> s;
            for(int j=0;j<3;j++)
                for(int l=0;l<3;l++)
                    s.insert(x[i*3+j][k*3+l]);
            vector<int> v(s.begin(),s.end());
            for(int k=0;k<9;k++)
                if(k+1!=v[k])
                    error=true;
        }
    cout<<(error?"No":"Yes")<<endl;


return 0;
}
