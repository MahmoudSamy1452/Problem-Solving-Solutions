#include <bits/stdc++.h>

using namespace std;
void hayakel() {
    int n; long long b;
    cin >> n;
    vector<long long> v;
    for(int i = 0; i < n; i++){
        cin >> b;
        if(i % 2) {
            v.push_back(b);
        } else {
            v.insert(v.begin(), b);
        }
    }
    if(!(n%2)){
        for(int i = n-1; i >= 0; i--){
            cout << v[i] << " ";
        }
    } else {
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
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