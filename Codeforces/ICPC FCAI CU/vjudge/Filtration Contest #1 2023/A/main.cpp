#include <bits/stdc++.h>

using namespace std;
void hayakel() {
    double x, y;
    int n;
    cin >> x >> y >> n;
    if(x > y/3.0)
        cout << n/3 * y + n%3 * x;
    else
        cout << x * n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        hayakel();
    }
}