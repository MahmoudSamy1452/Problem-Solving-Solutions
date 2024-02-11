#include <bits/stdc++.h>
using namespace std;

void solve() {
    stack<int> s1;
    stack<int>s2;
    string w;
    cin >> w;
    for(int i = 0; i < w.length(); i++){
        s1.push(w[i]);
        s2.push(w[w.length()-1-i]);
    }
    while(!s1.empty() || !s2.empty()){
        if(s1.top() == s2.top()) {
            s1.pop();
            s2.pop();
        }
        else
            s2.pop();
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}