#include <iostream>
#include <cstdio>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        vector<int> eat,carrot(4);
        int level,weight=0,num,poison=0;
        bool die=false;
        for(int &x:carrot)
            scanf("%d",&x);
        scanf("%d %d",&level,&weight);
        string str;
        cin.ignore();
        getline(cin,str);
        stringstream ss(str);
        while(ss>>num)
            eat.push_back(num);
        for(int x:eat){
            weight-=level*poison;
            if(weight<=0){
                die=true;
                break;
            }
            if(x==4){
                weight-=carrot[3];
                poison++;
            }
            else if(x==3)
                weight-=carrot[2];
            else if(x!=0)
                weight+=carrot[x-1];
        }
        if(weight<=0)
                die=true;
        if(die)
            printf("bye~Rabbit\n");
        else
            printf("%dg\n",weight);
    }
return 0;
}
