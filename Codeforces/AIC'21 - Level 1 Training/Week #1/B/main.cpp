#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    double n, m, min = DBL_MAX;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        double a, b;
        cin >> a >> b;
        if(a/b < min)
            min = a/b;
    }
    cout << fixed << setprecision(8) << m * min;
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}