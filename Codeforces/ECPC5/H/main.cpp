#include <bits/stdc++.h>
#include<cstring>
#include<cmath>
#define     cas                    "Case "
#define     gi(x)                  while(cin>>x)
#define     gi2(x,y)               while(cin>>x>>y)
#define     gi3(x,y,z)             while(cin>>x>>y>>z)
#define     ll                     long long
#define     ull                    unsigned long long
#define     pb(x)                  push_back(x)
#define     loop(i,a,b)            for(int i=a;i<b;++i)
#define     rloop(i,a,b)           for(int i=a-1;i>=b;i--)
#define     pi                     2*acos(0.0)
#define     exit                   return 0
#define     all(v)                 v.begin(),v.end()
#define     mem(a,v)               memset(a,v,sizeof(a))
#define     max2(a,b)              max(a,b)
#define     max3(a,b,c)            max(a,max(b,c))
#define     min2(a,b)              min(a,b)
#define     min3(a,b,c)            min(a,min(b,c))

#define     scan1(a)               scanf("%n",&a)
#define     scan2(a,b)             scanf("%n %n",&a,&b)
#define     scan3(a,b,c)           scanf("%n %n %n",&a,&b,&c)
#define     scanl(a)               scanf("%lld",&a)
#define     scanll(a,b)            scanf("%lld %lld",&a,&b)
#define     scanlll(a,b,c)         scanf("%lld %lld %lld",&a,&b,&c)

#define     print1(a)              printf("%n",a)
#define     print2(a,b)            printf("%n %n",a,b)
#define     print3(a,b,c)          printf("%n %n %n",a,b,c)
#define     printl(a)              printf("%lld",a)
#define     printll(a,b)           printf("%lld %lld",a,b)
#define     printlll(a,b,c)        printf("%lld %lld %lld",a,b,c)

#define     mxa                     900000
#define     lm                     1000000007
using namespace std;
void hayakel() {
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int sizeg;
    if(n*n%2)
        sizeg = n*n/2 + 1;
    else
        sizeg = n*n/2;
    int gc[sizeg], g[sizeg], j = 0, i = 0, c = 0;
    while(sizeg){
        while(i < n && a[i][j] != -1){
            g[c] = a[i][j];
            gc[c] = a[n-1-i][n-1-j];
            a[i][j] = -1;
            a[n-1-i][n-1-j] = -1;
            sizeg--;
            c++; i++;
        }
        i--; j++;
        if(!sizeg)
            break;
        while(j < n && a[i][j] != -1){
            g[c] = a[i][j];
            gc[c] = a[n-1-i][n-1-j];
            a[i][j] = -1;
            a[n-1-i][n-1-j] = -1;
            sizeg--;
            c++; j++;
        }
        j--; i--;
        if(!sizeg)
            break;
        while(i >= 0 && a[i][j] != -1){
            g[c] = a[i][j];
            gc[c] = a[n-1-i][n-1-j];
            a[i][j] = -1;
            a[n-1-i][n-1-j] = -1;
            sizeg--;
            c++; i--;
        }
        i++; j--;
        if(!sizeg)
            break;
        while(j >= 0 && a[i][j] != -1){
            g[c] = a[i][j];
            gc[c] = a[n-1-i][n-1-j];
            a[i][j] = -1;
            a[n-1-i][n-1-j] = -1;
            sizeg--;
            c++; j--;
        }
        j++; i++;
    }
    for(auto& x : g)
        cout << x << " ";
    cout << endl;
    for(int i = 0; i < n*n/2; i++)
        cout << gc[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        hayakel();
    }
}