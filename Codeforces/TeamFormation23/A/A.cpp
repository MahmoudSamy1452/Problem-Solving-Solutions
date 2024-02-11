#include <iostream>
#include <vector>
using namespace std;

int solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}