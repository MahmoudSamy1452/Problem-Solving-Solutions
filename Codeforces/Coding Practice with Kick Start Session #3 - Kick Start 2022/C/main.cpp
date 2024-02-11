#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n, r, c, sr, sc;
    cin >> n >> r >> c >> sr >> sc;
    int a[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
            a[i][j] = 0;
    }
    sr--; sc--;
    string instructions;
    cin >> instructions;
    a[sr][sc] = 1;
    for(int i = 0; i < instructions.length(); i++){
        char x = instructions[i];
        switch (x) {
            case 'E':{
                while(a[sr][sc]==1)
                    sc++;
                break;
            }
            case 'W':{
                while(a[sr][sc]==1)
                    sc--;
                break;
            }
            case 'N':{
                while(a[sr][sc]==1)
                    sr--;
                break;
            }
            case 'S':{
                while(a[sr][sc]==1)
                    sr++;
                break;
            }
        }
        a[sr][sc] = 1;
    }
    cout << sr+1 << " " << sc+1 << '\n';

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("input.txt", "r", stdin);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        hayakel();
    }
}