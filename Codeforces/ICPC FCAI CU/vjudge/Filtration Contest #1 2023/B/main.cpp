#include <bits/stdc++.h>

using namespace std;
void hayakel() {
    long long n, x;
    cin >> n >> x;
    vector<int> h(n);
    for(long long i = 0; i < n; i++){
        cin >> h[i];
    }
    long long j = h.size()-1;
    while(j >= 0 && h[j] >= x){
        j--;
    }
    if (j == -1)
        cout << 0 << '\n';
    else
        cout << j + 1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        hayakel();
    }
}