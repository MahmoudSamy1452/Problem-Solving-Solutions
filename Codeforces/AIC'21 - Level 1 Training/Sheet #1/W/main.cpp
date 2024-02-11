#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int a, b, ans;
    char s;
    cin >> a >> s >> b;
    switch (s) {
        case '+':
            ans = a+b;
            break;
        case '-':
            ans = a-b;
            break;
        default:
            ans = a*b;
    }
    cin >> s >> a;
    if(a == ans)
        cout << "Yes";
    else
        cout << ans;
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}