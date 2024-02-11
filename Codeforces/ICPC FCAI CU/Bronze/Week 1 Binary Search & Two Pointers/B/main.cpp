#include <bits/stdc++.h>
#define ll long long
#define pi 3.14159265359
#define EPS = 1e-6
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve(){
    int n, d, c; string s;
    cin >> n >> s;
    map<char, int> covered; set<char> v;
    for(auto x : s) {
        v.insert(x);
    }
    d = v.size();
    int i = 0, j = 0;
    while(covered.size() < d){
        covered[s[j]]++;
        j++;
    }
    int ans = j-i;
    c = d;
    while(!(c != d && j == s.size())){
        ans = min(ans, j-i);
        covered[s[i]]--;
        i++;
        if(!covered[s[i-1]]) c--;
        while(!covered[s[i-1]] && j < s.size()){
            covered[s[j]]++;
            if(s[j] == s[i-1])
                c++;
            j++;
        }
    }
    cout << ans;
}

int main() {
    fast

    int t = 1;
    //cin >> t;

    while(t--){
        solve();
    }
}
