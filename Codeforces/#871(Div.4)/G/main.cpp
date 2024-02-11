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

long long ans[2566841];
vector<vector<ll>> v(1500, vector<ll>(1500, 0));
int curr = 1;

void solve(){
    int n;
    cin >> n;
    cout << ans[n] << '\n';
}

int main(){
    //freopen("input.txt", "r",stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(ll i = 0; i < 1500; i++)
        for(ll j = 0; j < 1500; j++){
            v[i][j] = curr*curr;
            if(i > 0)
                v[i][j] += v[i-1][j];
            if(j > 0)
                v[i][j] += v[i][j-1];
            if(i > 0 && j > 0)
                v[i][j] -= v[i-1][j-1];
            ans[curr] = v[i][j];
            curr++;
        }

    int t = 1;
    cin >> t;
    while(t--)
        solve();
}