#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    long long x = 0;
    string s;
    int n, posl = 0, posr;
    cin >> n >> s;
    posr = n-1;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L')
            x+=i;
        else
            x+=(n-i-1);
    }
    for(int i = 0; i < n; i++){
        if(posr < (n-1)/2 && posl > (n-1)/2)
        {
            cout << x << " ";
            continue;
        }
        while(posl <= (n-1)/2 && s[posl] == 'R')
            posl++;
        while(posr > (n-1)/2 && s[posr] == 'L')
            posr--;
        if(posl <= (n-1)-posr)
        {
            s[posl] = 'R';
            x -= posl;
            x += (n-1)-posl;
        }
        else
        {
            s[posr] = 'L';
            x += posr;
            x -= (n-1)-posr;
        }
        cout << x << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        Baroudy14();
    }
}