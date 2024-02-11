#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    string str; cin >> str;
    unsigned ll sum = 0, length = str.length();
    unsigned ll start = -1, end = -1;
    bool go = false;
    for(ll i = 0; i < length; i++) {
        if(str[i] == ':')
            go = true;
        if(!go)
            continue;
        if(str[i] >= '0' && str[i] <= '9') {
            start = i;
            for(ll j = i; j < length; j++) {
                if(str[j] >= '0' && str[j] <= '9')
                    continue;
                else {
                    end = j;
                    break;
                }
            }
            if(end == -1)
                sum += stoull(str.substr(start));
            else {
                sum += stoull(str.substr(start, end - start));
                i = --end;
            }
            start = -1; end = -1;
        }
    }
    cout << sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    while(t--)
        solve();
    return 0;
}