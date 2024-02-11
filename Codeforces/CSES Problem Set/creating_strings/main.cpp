#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef pair<int, int> pi;
typedef map<int, int> mi;
typedef set<int> si;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
#define sq(a) (a)*(a)

// a source, b aux, c dest

int fact(int n){
    if(n == 1)
        return 1;
    return fact(n-1)*n;
}

void solve(){
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    vector<string> ans;
    do{
        ans.pb(str);
    } while(next_permutation(str.begin(), str.end()));
    cout << ans.size() << '\n';
    for(auto x : ans)
        cout << x << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}
