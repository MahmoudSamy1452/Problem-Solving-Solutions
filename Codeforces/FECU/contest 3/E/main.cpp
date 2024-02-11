#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    long long n, c = 1, j;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0 ; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n-1; i++){
        j = i;
        while(j < n-1 && arr[j+1] <= arr[j]*2){
            j++;
        }
        c = max(c, j - i + 1);
        i = j;
    }
    cout << c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--){
        baroudy14();
    }
}
