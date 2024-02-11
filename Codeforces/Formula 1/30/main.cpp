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
    int n, m;
    cin >> n >> m;
    int start = 0, end = n + 1;
    string str, temp;
    int y;
    getline(cin,str);
    while(m--){
        getline(cin,str);
        int dir;
        for(char x : str){
            if(x == ' ') {
                if (temp == "right")
                    dir = 1;
                else if(temp == "left")
                    dir = -1;
                temp = "";
            }
            else temp+=x;
        }
        y = stoi(temp);
        if(dir == 1){
            start = max(y,start);
        } else {
            end = min(y,end);
        }
        if(start >= end-1) {
            cout << -1;
            return;
        }
    }
    cout << end-start-1;
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