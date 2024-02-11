#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> x = {a, b, c};
    std::sort(x.begin(), x.end());
    cout << (((x[2] - x[0] - x[1]) + 1 > 0) ? (x[2] - x[0] - x[1]) + 1 : 0);
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}