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

#define     scan1(a)               scanf("%d",&a)
#define     scan2(a,b)             scanf("%d %d",&a,&b)
#define     scan3(a,b,c)           scanf("%d %d %d",&a,&b,&c)
#define     scanl(a)               scanf("%lld",&a)
#define     scanll(a,b)            scanf("%lld %lld",&a,&b)
#define     scanlll(a,b,c)         scanf("%lld %lld %lld",&a,&b,&c)

#define     print1(a)              printf("%d",a)
#define     print2(a,b)            printf("%d %d",a,b)
#define     print3(a,b,c)          printf("%d %d %d",a,b,c)
#define     printl(a)              printf("%lld",a)
#define     printll(a,b)           printf("%lld %lld",a,b)
#define     printlll(a,b,c)        printf("%lld %lld %lld",a,b,c)

#define     mxa                     900000
#define     lm                     1000000007
using namespace std;
void hayakel() {
    string s; int wild = 0;
    bool found1 = false, found2 = false;
    cin >> s;
    loop(i, 0, s.length()){
        if(s.substr(i, 3) == "ABA" || s.substr(i, 3) == "BAB") {
            wild++;
            i+=2;
        }
        if(s.substr(i,2) == "AB" && !found1)
        {
            found1 = true;
            i++;
        } else if(s.substr(i, 2) == "BA" && !found2)
        {
            found2 = true;
            i++;
        }
    }
    if(!found2 && wild){
        wild--;
        found2 = true;
    }
    if(!found1 && wild){
        wild--;
        found1 = true;
    }
    if(found1 && found2)
        cout << "YES";
    else
        cout << "NO";
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