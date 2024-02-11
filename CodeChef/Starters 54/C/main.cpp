#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    int n, x;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        cin >> x;
        s.insert(x);
    }
    if(s.size()%2 && s.size() == n)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        Baroudy14();
    }
}