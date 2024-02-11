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
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

void solve() {
    int n, x;
    cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++) {
        cin >> x;
        m[x]++;
    }
    if (m.size() == 1){
        cout << -1 << '\n';
        return;
    }
    cout << n-m.rbegin()->second << " " << m.rbegin()->second << '\n';
    auto it = m.begin();
    while(it != --m.end()){
        for(int i = 0; i < it->second; i++)
            cout << it->first << " ";
        it++;
    }
    cout << "\n";
    auto it1 = m.rbegin();
    for(int i = 0; i < it1->second; i++)
        cout << it->first << " ";
    cout << '\n';
}

int main(){
    //freopen("input.txt", "r",stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}