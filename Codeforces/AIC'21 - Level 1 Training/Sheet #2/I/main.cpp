#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    string s, temp;
    cin >> s;
    temp = s;
    std::reverse(s.begin(), s.end());
    int x1 = stoi(temp), x2 = stoi(s);
    cout << x2 << '\n';
    if(x1 == x2)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    fio;

    long long t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}