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
    int a, b;
    cin >> a >> b;
    if(a > b)
        swap(a, b);
    if (a <= 2) {
        a = 2;
        if (b >= 2) {
            cout << a << '\n';
            return;
        }
    }
    if(!(a%2))
        a++;
    for(int i = a; i <= b; i+=2){
        bool flag = true;
        for(int j = 2; j*j <= i; ++j){
            if(i%j == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag && i != 1){
            cout << i << '\n';
            return;
        }
    }
    cout << "STOP WASTING MY TIME" << '\n';
}

int main(){
    //freopen("input.txt", "r",stdin);
    //freopen("output.txt","w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}