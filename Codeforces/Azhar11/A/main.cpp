#include <bits/stdc++.h>
using namespace std;

void solve() {
    string w;
    cin >> w;
    int n = 0, i = 0, e =  0, t = 0;
    for(auto& x: w)
    switch(x){
        case 'n': {n++;
            break;}
        case 'i': {i++;
            break;}
        case 't': {t++;
            break;}
        case 'e': {e++;
            break;}
    }
    if(n < 3) {
        cout << 0;
        return;
    }
    n = (n-3)/2 + 1;
    e = e / 3;
    int a[4] = {n, i , e, t};
    int* min = min_element(a, a+4);
    cout <<  *min;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }
}