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
    string x; cin >> x;
    x = '0' + x;
    int p = x.length();
    for(int i=x.size()-1;i>=0;i--)
    {
        if(x[i]>='5')x[i-1]++,p=i;
    }
    for(int i=(x[0]=='0');i<x.size();i++)
    {
        cout<<(i>=p?'0':x[i]);
    }
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