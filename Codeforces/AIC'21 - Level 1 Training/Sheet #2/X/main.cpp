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
    long long n; int c = 0;
    cin >> n;
    while(n){
        if(n%2)
            c++;
        n/=2;
    }
    long long ans = 1;
    for(int i = 1; i < c;i++){
        ans+=ans+1;
    }
    cout << ans << '\n';
}


int main() {
    fio;

    long long t = 1;
    cin >> t;

    while(t--) {
        baroudy14();
    }
}