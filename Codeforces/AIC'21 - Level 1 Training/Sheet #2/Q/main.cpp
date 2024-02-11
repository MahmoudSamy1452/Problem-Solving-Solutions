#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    string s;
    cin >> s;
    std::reverse(s.begin(), s.end());
    for(auto x : s){
        cout << x << " ";
    }
    cout << '\n';
}

int main() {
    fio;

    long long t = 1;
    cin >> t;

    while(t--) {
        baroudy14();
    }
}