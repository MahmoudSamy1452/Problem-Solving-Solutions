#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

set<string, less<>> v;
string a, b;

bool is_prime(int x)
{
    if(x == 0 || x == 1){
        return false;
    }
    for(int i = 0; i < x/2; i++){
        if(x%i == 0)
            return false;
    }
    return true;
}

bool is_palindrom(int x){
    string w = bitset<21>(x);
}

void solve() {
    string w;
    cin >> w;
    int x = stoll(w,0,2);
    while(x++)
        if(is_prime(x) && is_palindrome(x)){
            cout << bitset<21>(x)
        }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while (t--)
        solve();
    return 0;
}