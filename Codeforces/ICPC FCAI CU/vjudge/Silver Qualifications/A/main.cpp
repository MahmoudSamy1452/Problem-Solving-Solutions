#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int N;
    cin >> N;

    string s;
    int c = 0, b = 0, w = 0;

    cin >> s;
    int j = s.length()-1;
    while(s[j] == '#')
        j--;
    int i = 0;
    while(s[i] == '.')
        i++;
    while(j >= i){
        if(s[j] == '#')
            b++;
        else
            w++;
        j--;
    }
    cout << min(b, w);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
