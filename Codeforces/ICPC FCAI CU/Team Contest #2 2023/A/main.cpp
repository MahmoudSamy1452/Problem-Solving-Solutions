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

vector<string> octave({"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"});

void solve(){
    string N1, N2, N3;
    cin >> N1 >> N2 >> N3;
    auto it = find(all(octave), N1);
    int a = 0, b = 0;
    while(*it != N2){
        it++;
        a++;
        if(it == octave.end())
            it = octave.begin();
    }
    while(*it != N3){
        it++;
        b++;
        if(it == octave.end())
            it = octave.begin();
    }
    if(a == 4 && b == 3){
        cout << "Major triad" << '\n';
    } else if(a == 3 && b == 4) {
        cout << "Minor triad" << '\n';
    } else {
        cout << "Dissonance" << '\n';
    }
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