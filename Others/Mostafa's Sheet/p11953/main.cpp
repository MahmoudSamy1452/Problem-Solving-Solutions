#include <bits/stdc++.h>
using namespace std;


vector<string> grid(110);
bool visited[110][110];


int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
int n;
bool isValid(int x, int y){
    return x >=0 && y >=0 && x < n && y < n;
}

void dfs(int x, int y){
    if(visited[x][y])
        return;
    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        if(isValid(x+dx[i],y+dy[i]) && (grid[x+dx[i]][y+dy[i]] == 'x' || grid[x+dx[i]][y+dy[i]] == '@')) {
            dfs(x+dx[i],y+dy[i]);
        }
    }
}

void baroudy14(){
    int ans = 0;
    cin >> n;
    memset(visited, false, sizeof(bool)*110*110);
    for(int i = 0; i < n; i++)
        cin >> grid[i];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(!visited[i][j] && grid[i][j] == 'x'){
                dfs(i,j);
                ans++;
            }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        baroudy14();
    }
}