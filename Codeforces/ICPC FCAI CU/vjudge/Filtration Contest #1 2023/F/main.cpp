#include <bits/stdc++.h>

using namespace std;

long long countPairs(long long n){
    return n*(n-1)/2 ;
}

void hayakel() {
    map<vector<char>, int> mp;
    long long n; char x;
    cin >> n;
    vector<char> ch;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> x;
            ch.push_back(x);
        }
        std::sort(ch.begin(), ch.end());
        mp[ch]++;
        ch.clear();
    }
    long long ans = 0;
    for(auto x : mp){
        ans += countPairs(x.second);
    }
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