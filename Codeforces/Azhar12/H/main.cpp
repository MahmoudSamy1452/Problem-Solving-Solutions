#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    string name;
    int n;
    cin >> n;
    int a, b, c, d;
    map<string, int[5]> list;
    for(int i = 0; i < n; i++){
        cin >> name >> a >> b >> c >> d;
        list[name][0] = a+b+c+d;
        list[name][1] = a;
        list[name][2] = b;
        list[name][3] = c;
        list[name][4] = d;

        ceil()
    }

}

int main() {
    int t = 1;
    while (t--)
        solve();
    return 0;
}