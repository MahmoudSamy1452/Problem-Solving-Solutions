#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int rec(char** a, const vector<pair<int, int>>& monsters, int i, int j, int n, int m, int c, int d) {
    if (i < 0 || j < 0 || i > n - 1 || j > m - 1 || a[i][j] == 'X')
        return 0;
    for (auto& x : monsters) {
        if (abs(x.first - i) + abs(x.second - j) <= d)
            return 0;
    }
    if (a[i][j] == 'F')
        return c;
    a[i][j] = 'X';
    int x = rec(a, monsters, i + 1, j, n, m, c + 1, d);
    if (x)
        return x;
    x = rec(a, monsters, i, j + 1, n, m, c + 1, d);
    if (x)
        return x;
    x = rec(a, monsters, i - 1, j, n, m, c + 1, d);
    if (x)
        return x;
    x = rec(a, monsters, i, j - 1, n, m, c + 1, d);
    if (x)
        return x;
    else return 0;
}

void hayakel() {
    int n, m, d;
    cin >> n >> m >> d;
    char** a = new char* [n];
    pair<int, int> start;
    vector<pair<int, int>> monsters;
    for (int i = 0; i < n; i++)
    {
        a[i] = new char[m];
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'M')
                monsters.pb(make_pair(i, j));
            else if (a[i][j] == 'S')
                start = make_pair(i, j);
        }
    }

    int ans = rec(a, monsters, start.first, start.second, n, m, 0, d);
    if (ans)
        cout << ans;
    else
        cout << -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    while (t--)
        hayakel();
    return 0;
}