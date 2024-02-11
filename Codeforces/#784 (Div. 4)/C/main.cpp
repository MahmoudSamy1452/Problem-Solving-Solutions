#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        int o,e;
        bool can = true;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(i == 0)
                e = x%2;
            else if (i == 1)
                o = x%2;
            else if((i%2 && x%2 != o) || (!(i%2) && x%2 != e))
                can = false;
        }
        if(can)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
