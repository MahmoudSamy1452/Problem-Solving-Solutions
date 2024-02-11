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
    int n;
    cin >> n;
    //1, 2, 5(sum odd), 6 NO
    //3(1,2 3), 4(1,4 2,3), 7 YES
    si A, B;
    if(n*(n+1)/2 % 2){
        cout << "NO";
        return;
    }
    cout << "YES" << '\n';
    bool Aturn = true;
    for(int i = 1, j = (n/2)*2; i < j; i++, j--){
        if(Aturn)
        {
            A.insert(i);
            A.insert(j);
        } else
        {
            B.insert(i);
            B.insert(j);
        }
        Aturn = !Aturn;
    }
    if(n%2)
        B.insert(n);
    cout << A.size() << '\n';
    for(auto e : A){
        cout << e << " ";
    }
    cout << '\n' << B.size() << '\n';
    for(auto e : B){
        cout << e << " ";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}