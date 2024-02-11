#include <bits/stdc++.h>

using namespace std;
void hayakel() {
    int n, x; long long s;
    cin >> n >> x >> s;
    for(int i = 0;i < x; i++){
        cout << s << " ";
    }
    for(int i = 0;i < n-x; i++){
        cout << (s+1)%1000000000 << " ";
    }
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