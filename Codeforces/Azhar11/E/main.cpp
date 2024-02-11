#include <bits/stdc++.h>
using namespace std;

void solve() {
    char w[105];
    char v[6] = {'a', 'e','i', 'o', 'u', 'y'};
    cin.getline(w, 105);
    char prev;
    for(auto& x: w)
    {
        if(x == ' ')
            continue;
        if(x != '?')
            prev = x;
        else
            break;
    }
    for(auto& x: v)
    {
        if(tolower(prev) == x)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }
}