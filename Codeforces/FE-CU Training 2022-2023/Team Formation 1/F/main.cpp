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
    int n, sum1, sum2, cnt = 0;
    cin >> n;
    rep(i, 1, n){
        sum1 = 0; sum2 = 0;
        for(char x : to_string(i)){
            sum1 += (x-'0')*(x-'0');
        }
        for(char x : to_string(sum1)){
            sum2 += (x-'0')*(x-'0');
        }
        if(sum2 == 1)
            cnt++;
    }
    cout << cnt;
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