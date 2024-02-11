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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define sq(a) (a)*(a)

void solve(){
    vector<int> v(26, 0);
    string str;
    cin >> str;
    for(auto x : str){
        v[x-'A']++;
    }
    int cntOdd= 0;
    string odd = "";
    for(int i =0; i < v.size(); i++)
        if(v[i] % 2){
            cntOdd++;
            odd = i+'A';
        }
    if((cntOdd == 1 && str.size()%2 == 0) || cntOdd > 1) {
        cout << "NO SOLUTION";
        return;
    }
    string ans = "";
    for(int i = 0; i < v.size(); i++)
        for(int j = 0; j < v[i]/2; j++)
        {
            ans+=i+'A';
        }
    cout << ans << odd;
    reverse(ans.begin(), ans.end());
    cout << ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}