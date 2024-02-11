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
    int n, a, b, ans = 0;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++){
        int x = sum_of_digits(i);
        if(x >= a and x <= b)
            ans+=i;
    }
    cout << ans;
}

int main() {
    fio;

    long long t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}