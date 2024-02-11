#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n == 5 && s.find('T') != string::npos && s.find('i') != string::npos && s.find('m') != string::npos && s.find('u') != string::npos && s.find('r') != string::npos)
        cout << "YES" << '\n';
    else cout << "NO" << '\n';
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