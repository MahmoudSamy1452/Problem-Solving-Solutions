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
    int x = 1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << x << " " << x+1 << " " << x+2 << " PUM" << '\n';
        x+=4;
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