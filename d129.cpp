#include <iostream>
#include <cstdio>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    auto it=s.begin();
    for(int i=0;i<1499;i++){
        s.insert(*it*2);
        s.insert(*it*3);
        s.insert(*it*5);
        it++;
    }
    printf("The 1500'th ugly number is %d.",*it);
return 0;
}
