#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int n, x, e = 0, o = 0, pos = 0, neg = 0;
    cin >> n;

    while(n--){
        cin >> x;
        if(x > 0)
            pos++;
        else if (x < 0)
            neg++;
        if(x%2)
            o++;
        else
            e++;
    }
    cout << "Even: " << e << '\n' << "Odd: " << o << '\n' << "Positive: " << pos << '\n' << "Negative: " << neg;
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}