#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    int n, a[26];
    cin >> n;
    memset(a, 0, sizeof(int)*26);
    string s;
    cin >> s;
    for(auto& x : s){
        a[tolower(x)-'a']++;
    }
    for(auto& x : a){
        if(!x)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        Baroudy14();
    }
}