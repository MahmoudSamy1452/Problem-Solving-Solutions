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
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()

int v[10][1000001];

int rec(int x){
    if(x < 10) return x;
    int p = 1;
    while(x){
        if(x%10) p *= (x%10);
        x /= 10;
    }
    return rec(p);
}

void solve(){
    for(int i=1;i<=1000000;i++){
        v[rec(i)][i]++;
    }
    for(int i=1;i<10;i++){
        for(int j=1;j<=1000000;j++){
            v[i][j]+=v[i][j-1];
        }
    }
    int Q;
    cin>>Q;
    while(Q--){
        int l,r,k;
        cin>>l>>r>>k;
        cout<<v[k][r]-v[k][l-1]<<endl;
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