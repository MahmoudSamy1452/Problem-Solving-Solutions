#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n, c = 0; cin >> n;
        string* a = new string[n];
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        for(int i = 0; i < n;i++)
            for(int j = i+1; j < n; j++)
                if(a[i][0] == a[j][0] && a[i][1] != a[j][1] || a[i][0] != a[j][0] && a[i][1] == a[j][1])
                    c++;
        cout << c << endl;
        delete[] a;
    }
}
