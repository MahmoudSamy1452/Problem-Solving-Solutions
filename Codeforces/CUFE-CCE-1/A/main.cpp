#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n, m, x;
    cin >> n >> m >> x;
    char a[n][m];
    bool shift = true;
    vector<pair<int, int>> pos;
    map<char, double> mp;
    int f[30];
    memset(f, 0, sizeof(int)*30);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j] == 'S')
                pos.push_back(make_pair(i,j));
        }
    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(a[i][j] != 'S')
                f[a[i][j]-'a']++;
                for(auto& z : pos)
                {
                    if(!mp[a[i][j]])
                        mp[a[i][j]] = sqrt(pow(i-z.first, 2)+pow(j-z.second, 2));
                    if(sqrt(pow(i-z.first, 2)+pow(j-z.second, 2)) < mp[a[i][j]] )
                        mp[a[i][j]] = sqrt(pow(i-z.first, 2)+pow(j-z.second, 2));
                }
        }
    }
    int l, c = 0;
    cin >> l;
    string w;
    cin >> w;
    for (auto &z: w) {
        if (z >= 'A' && z <= 'Z') {
            if (pos.empty()) {
                cout << -1;
                return;
            }
            if (f[tolower(z)-'a'] && mp[tolower(z)] > x) {
                c++;
            }
        }
        if (!f[tolower(z)-'a']) {
            cout << -1;
            return;
        }
    }
    cout << c;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    //cin >> t;

    while(t--)
        hayakel();
}