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

void solve(){
    int n;
    cin >> n;
    vi v(n), b;
    rep(i, 0, n-1){
        cin >> v[i];
    }
    b.push_back(v[0]);
    for(int i = 1; i < v.size(); i++){
        if(v[i] >= v[i-1])
            b.push_back(v[i]);
        else{
            b.push_back(v[i]);b.push_back(v[i]);}
    }
    cout << b.size() << '\n';
    for(auto x : b){
        cout << x << " ";
    }
    cout << "\n";
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