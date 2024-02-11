#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve() {
    int s, c;
    cin >> s >> c;
    int* a = new int[c];
    int* diff = new int[c-s+1];
    for(int i = 0; i < c; i++){
        cin >> a[i];
    }
    sort(a,a+c);
    for(int i = 0; i <= c-s; i++)
    {
        diff[i] = a[i+s-1] - a[i];
    }
    int*x = min_element(diff, diff+c-s+1);
    cout << *x << endl;
}

int main() {
    int t = 1;
    while(t--)
        solve();
    return 0;
}