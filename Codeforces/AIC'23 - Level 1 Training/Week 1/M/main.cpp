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
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()


struct item{
    string name;
    int x, y, z, w;
};

ll score(item d){
    int total = 0;
    for(auto c : d.name){
        total += c;
    }
    return total + d.y + d.w;
}

bool mySort(pair<item, ll> a, pair<item, ll> b){
    if(score(a.first) != score(b.first))
        return score(a.first) < score(b.first);
    return a.second > b.second;
}

void solve(){
    int n, x, y, z, w;
    string s;
    cin >> n;
    vector<pair<item, ll>> v;
    rep(i, 1, n){
        item d;
        cin >> d.name >> d.x >> d.y >> d.z >> d.w;
        v.pb(mp(d,i));
    }
    sort(all(v), mySort);
    for(auto i : v){
        cout << i.first.name << " " << i.first.x << " " << i.first.y << " " << i.first.z << " " << i.first.w << '\n';
    }
}

int main(){
    //freopen("input.txt", "r",stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}