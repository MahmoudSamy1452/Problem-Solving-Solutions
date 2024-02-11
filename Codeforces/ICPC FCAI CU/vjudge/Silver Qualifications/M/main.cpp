#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
   long long a, b, c, d;
   cin >> a >> b >> c >> d;
   cout << a*d - b*c;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
