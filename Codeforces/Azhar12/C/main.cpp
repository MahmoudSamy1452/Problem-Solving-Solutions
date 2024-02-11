#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    int n, c= 0;
    cin >> n;
    string w1, w2;
    cin >> w1 >> w2;
    char ch1, ch2;
    bool found = false, tmm = false;
    if(w1 == w2){
        cout << "Yes" << endl;
        return;
    }
    for(int i = 0; i < n; i++){
        if(!found && w1[i] != w2[i]) {
            ch1 = w1[i];
            ch2 = w2[i];
            found = true;
            continue;
        }
        if(w1[i] != w2[i])
            c++;
        if(found && w1[i] == ch1 && w2[i] == ch2){
            tmm = true;
        }
    }
    if(tmm && c == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}