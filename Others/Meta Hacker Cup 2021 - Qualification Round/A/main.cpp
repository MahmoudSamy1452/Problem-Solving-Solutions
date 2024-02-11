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
#define pb push_back
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a)*(a)
#define all(v) v.begin(), v.end()
string vowels = "AEIOU";

int n = 1;
void solve(){
    vi cnt(30, 0); vi freq(30, 0);
    string str;
    cin >> str;
    for(char x : str){
        cnt[x-'A']++; freq[x-'A']++;
        int i = 0;
        if(vowels.find(x) != string::npos){
            for(int j = 0; j < 30; j++) {
                char l = 'A'+j;
                if (l > vowels[i] && i < 4) i++;
                if (l == vowels[i]) continue;
                cnt[j]++;
            }
        }
        else
            for(char y : vowels){
                cnt[y-'A']++;
            }
    }
    int ans = str.length()*3;
    for(int i = 0; i < 30; i++){
        ans = min(ans, cnt[i] - freq[i] + ((int)str.length()-cnt[i])*2);
    }
    if(ans == str.length()*3)
        cout << "Case #" << n << ": " << -1 << '\n';
    else
        cout << "Case #" << n << ": " << ans << '\n';
}

int main(){
    freopen("consistency_chapter_1_input.txt", "r",stdin);
    freopen("output.txt","w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(n <= t) {
        solve();
        n++;
    }
}