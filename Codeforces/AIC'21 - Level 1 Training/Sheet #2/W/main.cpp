#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int sum_of_digits(int n){
    int sum = 0;
    for(char x : to_string(n)){
        sum+=x-'0';
    }
    return sum;
}
void baroudy14(){
    int n;
    cin >> n; vector<string> sv;
    string s = "*";
    for(int i = 0; i < n; i++){
        cout << setw(n+i) << s << '\n';
        sv.push_back(s);
        s+="**";
    }
    for(int i = n-1; i >= 0; i--){
        cout << setw(n+i) << sv[i] << '\n';
    }
}

int main() {
    fio;

    long long t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}