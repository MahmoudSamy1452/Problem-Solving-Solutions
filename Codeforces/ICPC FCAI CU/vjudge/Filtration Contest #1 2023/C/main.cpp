#include <bits/stdc++.h>

using namespace std;
void hayakel() {
    int s; long long acc = 0;
    cin >> s;
    for(int i = 1; i < s;i++){
        acc += (s+i-1)/i - 1;
    }
    cout << acc;
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