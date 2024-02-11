#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int x = (d1 - r2 + c1)/2, y = (d2 - r2 + c2)/2, z = (d2 - r1 + c1)/2, w = (d1 - r1 + c2)/2;
    int arr[4] = {x, y, z, w};
    sort(arr, arr+4);
    bool dup = false;
    for(int i = 0; i < 3; i++)
        if(arr[i]==arr[i+1])
            dup = true;

    if(x+y != r1 or z+w != r2 or x+z != c1 or y+w != c2 or x+w != d1 or y+z != d2 or dup or arr[3] > 9 or arr[0] < 1)
    {
        cout << -1;
        return;
    }
    cout << x << " " << y << '\n' << z << " " << w;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--){
        baroudy14();
    }
}