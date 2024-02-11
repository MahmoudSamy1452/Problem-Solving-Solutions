#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include<set>
#include<list>
#include<map>
#include<utility>
using namespace std;
void solve()
{
    const int MAX = 300;
    int arr[MAX][MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // 0 down 1 right 2 up 3 left
    int gi = 0;
    int gic = 2;
    int i = 0;
    int j = 0;
    int ic = n - 1;
    int jc = n - 1;
    int count = 0;
    int countc = 0;
    int* ary = new int[n];
    int* aryc = new int[n];
    //-1 for gi
    //-2 for gic
    bool chek = true;
    bool chekc = true;
    while (1)
    {
        chek = true;
        chekc = true;

        //checkss
        if (i == n || j == n || i == -1 || j == -1)
        {
            if (gi == 0)
            {
                i--;
            }
            if (gi == 1)
            {
                j--;
            }
            if (gi == 2)
            {
                i++;
            }
            if (gi == 3)
            {
                j++;
            }
            gi++;
            if (gi > 3)
                gi = 0;
            chek = false;

        }
        if (ic == n || jc == n || ic == -1 || jc == -1)
        {
            if (gic == 0)
            {
                ic--;
            }
            if (gic == 1)
            {
                jc--;
            }
            if (gic == 2)
            {
                ic++;
            }
            if (gic == 3)
            {
                jc++;
            }
            gic++;
            if (gic > 3)
                gic = 0;
            chekc = false;
        }
        if (arr[i][j] == -2)
        {
            if (gi == 0)
            {
                i--;
            }
            if (gi == 1)
            {
                j--;
            }
            if (gi == 2)
            {
                i++;
            }
            if (gi == 3)
            {
                j++;
            }
            gi++;
            if (gi > 3)
                gi = 0;
            chek = false;

        }
        if (arr[ic][jc] == -1)
        {
            if (gic == 0)
            {
                ic--;
            }
            if (gic == 1)
            {
                jc--;
            }
            if (gic == 2)
            {
                ic++;
            }
            if (gic == 3)
            {
                jc++;
            }
            gic++;
            if (gic > 3)
                gic = 0;
            chekc = false;

        }
        //end of checks
        if (chek)
        {
            if (arr[i][j] > 0)
            {
                ary[count] = arr[i][j];
                count++;
                arr[i][j] = -1;
            }
        }
        if (chekc)
        {
            if (arr[ic][jc] > 0)
            {
                aryc[countc] = arr[ic][jc];
                arr[ic][jc] = -2;
                countc++;
            }

        }
        if (countc + count >= n * n)
            break;
        //movement
        if (gi == 0)
        {
            i++;
        }
        if (gi == 1)
        {
            j++;
        }
        if (gi == 2)
        {
            i--;
        }
        if (gi == 3)
        {
            j--;
        }
        if (gic == 0)
        {
            ic++;
        }
        if (gic == 1)
        {
            jc++;
        }
        if (gic == 2)
        {
            ic--;
        }
        if (gic == 3)
        {
            jc--;
        }
    }

    for (int z = 0; z < count; z++)
        printf("%d ", ary[z]);

    cout << endl;
    for (int z = 0; z < countc; z++)
        printf("%d ", aryc[z]);




    return;





}

int main() {
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}