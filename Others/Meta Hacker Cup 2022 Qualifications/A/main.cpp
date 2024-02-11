#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int N, K;
    cin >> N >> K;

    int a[N];
    for(int i = 0; i < N; i++)
        cin >> a[i];

    if(N > 2*K) {
        cout << "NO" << '\n';
        return;
    }

    for(int i = 0; i < N; i++)
        if(count(a, a+N, a[i]) > 2){
            cout << "NO" << '\n';
            return;
        }
    cout << "YES" << '\n';
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        hayakel();
    }
}