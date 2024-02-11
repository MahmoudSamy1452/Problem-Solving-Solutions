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

vector<vi> v(2e5+1, vi());
vi leaves(2e5+1, -1);

int dfs(int vertix){
    if(v[vertix].empty())
        return 1;
    int ans = 0;
    if(leaves[vertix] != -1)
        return leaves[vertix];
    for(auto e : v[vertix]){
        ans += dfs(e);
    }
    return ans;
}

void solve(){
    int n, v1, v2;
    cin >> n;
    for (auto &i : v)
    {
        i.clear();
    }
    fill(leaves.begin(), leaves.end(),-1);
    for(int i = 0; i < n-1; i++){
        cin >> v1 >> v2;
        v[min(v1, v2)].pb(max(v1, v2));
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> v1 >> v2;
        leaves[v1] = dfs(v1);
        leaves[v2] = dfs(v2);
        cout << leaves[v1] * leaves[v2] << '\n';
    }
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