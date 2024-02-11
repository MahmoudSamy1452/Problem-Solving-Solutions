#include <bits/stdc++.h>
using namespace std;

char graph[30][30];
bool visited[30][30];
int n;
bool isValid(const int i, const int j){
    return i >= 0 && i < n && j >= 0 && j < n;
}

void dfs(const int i, const int j){
    if(visited[i][j])
        return;
    visited[i][j] = true;
    for(int m = i-1; m <= i+1; m++) {
        for (int l = j - 1; l <= j + 1; l++) {
            if (isValid(m, l) && !visited[m][l] && graph[m][l] == '1')
                dfs(m, l);
        }
    }
}

void baroudy14(){
    int r = 1;
    while(cin >> n) {
        int ans = 0;
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> graph[i][j];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!visited[i][j] && graph[i][j] == '1') {
                    dfs(i, j);
                    ++ans;
                }
            }
        }
        cout << "Image number " << r++ << " contains " << ans << " war eagles." << '\n';
    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        baroudy14();
    }
}