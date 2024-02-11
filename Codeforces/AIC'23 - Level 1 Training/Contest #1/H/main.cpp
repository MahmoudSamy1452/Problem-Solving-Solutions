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

struct stud {
    string name;
    int a,m, s, e;
};

bool mySort(stud a, stud b){
    int total_a= a.a + a.m + a.s + a.e, total_b= b.a + b.m + b.s + b.e;
    if(total_a == total_b)
        return a.name < b.name;
    return total_a > total_b;
}

void solve(){
    int n;
    cin >> n;
    vector<stud> v(n);
    rep(i,0,n-1){
        stud x;
        cin >> x.name >> x.a >> x.m >> x.s >> x.e;
        v[i] = x;
    }
    sort(all(v), mySort);
    for(auto x : v) {
        int total = x.a + x.m + x.s + x.e;
        cout << x.name << " " << total << " " << x.a << " " << x.m << " " << x.s << " " << x.e << "\n";
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