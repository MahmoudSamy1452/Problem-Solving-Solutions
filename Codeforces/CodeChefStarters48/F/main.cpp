#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int* a = new int[n];
    int x = 1, max = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i = 1; i < n; i++){
        if(a[i]==a[i-1])
            x++;
        else
            x = 1;
        if(x-a[i-1]+1 > max)
            max = x-a[i-1]+1;
    }
    cout << max << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}