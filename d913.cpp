#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<vector<int> > guess;
    vector<int> test={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        vector<int> line;
        for(int j=0;j<7;j++){
            int a;
            cin>>a;
            line.push_back(a);
        }
        guess.push_back(line);
    }
    while(next_permutation(test.begin(),test.end())){
        bool check=true;
        for(int i=0;i<6;i++){
            int yes=0;
            for(int j=0;j<6;j++)
                if(guess[i][j]==test[j])
                    yes++;
            if(yes!=guess[i][6])
                check=false;
        }
        if(check)
            break;
    }
    for(int x:test)
        cout<<x<<" ";
 return 0;
}
