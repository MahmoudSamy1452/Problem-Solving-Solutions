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
    int n, x;
    cin >> n;

    vector<int> positive, negative;

    for (int i = 0; i < n; ++i) {
        cin >> x;

        if (x > 0) {
            positive.push_back(x);
        } else {
            negative.push_back(-x);
        }
    }

    std::sort(all(positive));
    positive.erase(unique(all(positive)), positive.end());

    std::sort(all(negative));
    negative.erase(unique(all(negative)), negative.end());

    int count = 0, i = 0, j = 0;

    while (i < positive.size() && j < negative.size()) {
        if (positive[i] == negative[j]) {
            ++i;
            ++j;
        } else if (positive[i] < negative[j]) {
            ++count;
            ++i;
        } else {
            ++j;
        }
    }

    count += positive.size() - i;

    std::cout << count << '\n';
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