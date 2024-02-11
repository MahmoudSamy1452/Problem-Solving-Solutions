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

void solve(){
    ll n, me = INT_MIN;
    cin >> n;
    string str;
    cin >> str;
    map<char,int> m;
    for(char x : str){
        m[x]++;
        me = max(m[x], (int)me);
    }
    set<string> ans;
    for(auto x : m){
        if(x.s == me){
            string st = "";
            for(int i = 0; i < me; i++){
                st+=x.f;
            }
            ans.insert(st);
        }
    }
    cout << ans.size() << '\n';
    for(auto x : ans){
        cout << x << '\n';
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