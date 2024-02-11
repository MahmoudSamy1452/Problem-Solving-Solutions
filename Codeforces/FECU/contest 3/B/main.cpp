#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;
    if(m+1 < n)
    {
        cout << "NO";
        return;
    }
    int j;
    bool found = false;
    for(j = 0; j < s.length(); j++){
        if(s[j] == '*'){
            found = true;
            j++;
        }




    for(int i = 0; i < t.length(); i++){
        if(s[j] == '*'){
            found = true;
            j++;
        }
        if(found) {
            if (s.substr(j, n - j) == t.substr(m - n + j, n - j) && n - j <= m - i) {
                cout << "YES";
                return;
            } else {
                cout << "NO";
                return;
            }
        } else if(s[j] == t[i])
        {
            j++;
            if(j == n && i == j-1) {
                cout << "YES";
                return;
            }
        } else {
           cout << "NO";
           return;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--){
        baroudy14();
    }
}
