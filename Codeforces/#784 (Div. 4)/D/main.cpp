#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int b = 0, r = 0, w = 0;
        string word;
        cin >> word;
        bool can = true;
        bool before = false;
        for(int i = 0; i < n; i++){
            if(word[i] ==  'B') {
                before = false;
                b++;
            }
            else if(word[i] == 'R'){
                before = false;
                r++;
            }
            else if(word[i] == 'W')
            {
                w++;
                if(b == 0 || r == 0) {
                    can = false;
                }
                if(before)
                    can = true;
                before = true;
                if(i != n-1) {
                    b = 0;
                    r = 0;
                }
            }
        }
        if((can && b >=1 && r>=1) || w == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
