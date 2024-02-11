#include <bits/stdc++.h>
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    vector<int> v(3);
    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }
    std::reverse(v.begin(), v.end());
    if(std::is_sorted(v.begin(), v.end())){
        cout << "YES";
    } else
        cout << "NO";
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
