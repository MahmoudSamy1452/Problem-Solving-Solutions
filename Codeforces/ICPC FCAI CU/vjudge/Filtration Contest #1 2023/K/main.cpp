#include <bits/stdc++.h>

using namespace std;

void hayakel() {
    int n;
    long long ans = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    for(int i = 0; i < n; i++)
        if(a[i] > b[i])
            ans += a[i] - b[i];
    cout << ans;
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