#include <bits/stdc++.h>
using namespace std;

void hayakel() {
    int r, c;
    cin >> r >> c;
    string a[r];
    bool tree = false;
    for (int i = 0; i < r; i++){
        cin >> a[i];
        for (int j = 0; j < c; j++) {
            if (a[i][j] == '^')
                tree = true;
        }
    }
    if(tree && (r == 1 || c == 1))
    {
        cout << "Impossible" << '\n';
        return;
    }
    cout << "Possible" << '\n';
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if(tree)
                cout << '^';
            else
                cout << '.';
        }
        cout << '\n';
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        hayakel();
    }
}