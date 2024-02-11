#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c = 0;
    cin >> n;
    string w;
    cin >> w;
    for(int i  = 0; i < w.length();i++){
        if(w[i] == '>'&& i < w.length()-1)
            w.erase(i+1);
        else if(i > 0 && w[i] == '<')
            w.erase(i-1);
    }
    cout << w.length() - 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
}