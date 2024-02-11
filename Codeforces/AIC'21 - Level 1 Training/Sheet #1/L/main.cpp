#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    string s1, s2;
    cin >> s1 >> s1;
    cin >> s2 >> s2;
    if(s1 == s2)
        cout << "ARE Brothers";
    else
        cout << "NOT";
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}