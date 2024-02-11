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

void merge(vector<int>& v, int l1, int r1, int l2, int r2){
    int i = l1, j = l2;
    vector <int> b;
    while(i <= r1 && j <= r2){
        if(v[i] > v[j]){
            b.pb(v[j++]);
        } else
            b.pb(v[i++]);
    }
    while(i <= r1){
        b.pb(v[i++]);
    }
    while(j <= r2){
        b.pb(v[j++]);
    }
    i = l1;
    for(auto x : b){
        v[l1++] = x;
    }
}

void mergesort(vector<int>& v, int l, int r){
    if(l == r)
        return;
    int mid = (l+r)/2;
    mergesort(v, l, mid);
    mergesort(v, mid+1, r);
    merge(v,l, mid, mid+1, r);
}

void solve(){
    ll n;
    cin >> n;
    vi v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    mergesort(v, 0, n-1);
    for(auto x : v){
        cout << x << " ";
    }
}

int main(){
    //freopen("sets.in", "r",stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;
    while(t--)
        solve();
}
