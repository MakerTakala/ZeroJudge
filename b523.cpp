#include <iostream>
#include <set>
#include <cstring>
using namespace std;

int main()
{
    set<string> s;
    string song;
    while(getline(cin,song)){
        cout<<(s.find(song)!=s.end()?"YES":"NO")<<endl;
        s.insert(song);
    }

return 0;
}

