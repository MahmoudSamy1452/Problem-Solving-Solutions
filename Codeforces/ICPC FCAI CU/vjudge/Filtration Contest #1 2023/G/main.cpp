#include <bits/stdc++.h>

using namespace std;

int dx[4] = {1,0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void hayakel() {
    double x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    x3 = x2-(y2-y1);
    y3 = y2+x2-x1;
    x4 = x3-(y3-y2);
    y4 = y3+x3-x2;
    cout << x3 << " " << y3 << " " << x4 << " " << y4;
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