#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int* a = new int[n];
        for(int i = 0; i < n; i++)
            a[i] = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x-1]++;
        }
        bool done = false;
        for(int i = 0; i < n; i++)
        {
            if(a[i] >= 3){
                cout << i+1 << endl;
                done = true;
                break;
            }
        }
        if(!done)
            cout << -1 << endl;

    }
}
