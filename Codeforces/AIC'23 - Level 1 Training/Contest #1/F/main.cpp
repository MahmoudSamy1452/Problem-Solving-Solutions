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

void solve(){
    int n, c = 0;
    cin >>  n;
    string str1, str2;
    cin >> str1 >> str2;
    char a1, a2, b1, b2;
    rep(i, 0, n-1){
        if(str1[i] != str2[i] && !a1)
        {
            a1 = str1[i];
            b1 = str2[i];
            c++;
        } else if(str1[i] != str2[i])
        {
            a2 = str1[i];
            b2 = str2[i];
            c++;
        }
    }
    if(c == 2 && a1 == a2 && b1 == b2)
        cout << "Yes" << '\n';
    else cout << "No" << '\n';
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