#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, k, x;
    cin >> n >> k;
    bool cycle = true, noChange =  false;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> x;
    auto pos = find(a.begin(), a.end(), x);
    if(pos == a.begin())
        noChange = true;
    if(n == 2 && noChange == k%2)
        cycle = false;
    int c = 1;
    while(c < n) {
        if (pos == a.end() - 1)
            pos = a.begin();
        else
            pos++;
        cin >> x;
        if (x != *pos)
        {
            cycle = false;
        }
        c++;
    }
    if(cycle && ((k && !noChange) || (k != 1 && noChange)))
        cout << "YES";
    else cout << "NO";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;

    for(int i = 0; i < t; i++){
        cout << "Case #" << i + 1 << ": ";
        baroudy14();
        cout << '\n';
    }
}