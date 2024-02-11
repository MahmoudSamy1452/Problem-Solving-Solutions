#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1, s2;
    while(cin >> s1) {
        cin >> s2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int a[600];
        memset(a, 0, sizeof(int)*600);
        for(int i = 0; i < s1.length(); i++)
            for(int j = 0; j < s2.length(); j++)
                a[i+j] += (s1[i]-'0') * (s2[j]-'0');

        for(int i = 0; i < 600-1; i++) {
            a[i + 1] += a[i] / 10;
            a[i] = a[i] % 10;
        }

        int i = 599;
        while(i > 0 && a[i] == 0) i--;
        for(;i >= 0; i--) cout << a[i];
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}