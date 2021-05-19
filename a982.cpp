#include <iostream>
#include <queue>
using namespace std;
int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0,-1}};
struct point{
    int x, y, ans;
};
int main()
{
    int n, ans = 0;
    bool graph[101][101];
    char c;
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n + 1; j++){
            c = getchar();
            if(c == '#'){
                graph[i][j] = false;
            }
            else if(c == '.'){
                graph[i][j] = true;
            }
            else{
                graph[i][j] = false;
            }
        }
    }
    queue<point> q;
    q.push({1, 1, 0});
    while(!q.empty()){
        point s = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            if(s.x == n-2 && s.y == n-2){
                cout << s.ans + 1 << endl;
                graph[s.x][s.y] = false;
                q = queue<point>();
                break;
            }
            if( graph[s.x + d[i][0]][s.y + d[i][1]]){
                q.push({s.x + d[i][0], s.y + d[i][1], s.ans + 1});
                graph[s.x][s.y] = false;
            }
        }
    }
    if(graph[n-2][n-2]){
        cout<<"No solution!"<<endl;
    }
return 0;
}
