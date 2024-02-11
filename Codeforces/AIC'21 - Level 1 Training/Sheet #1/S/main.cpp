#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    double x;
    cin >> x;
    if(x >= 0 and x <= 25)
        cout << "Interval [0,25]";
    else if(x > 25 and x <= 50)
        cout << "Interval (25,50]";
    else if(x > 50 and x <= 75)
        cout << "Interval (50,75]";
    else if(x > 75 and x <= 100)
        cout << "Interval (75,100]";
    else cout << "Out of Intervals";
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}