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
    map<int,queue<int>,greater<>> weapons;
    string inventory;
    cin >> inventory;
    ll k, i = 1, power = LONG_LONG_MAX;
    bool neg = false;
    cin >> k;
    for(auto& c : inventory){
        if(c != '|')
        {
            if(power == LONG_LONG_MAX)
                power = 0;
            if(c == '-') {
                neg = true;
                continue;
            }
            power += c-'0';
            power*=10;
        }
        else
            if(power != LONG_LONG_MAX)
            {
                if(neg)
                    power*=-1;
                neg = false;
                weapons[power/10].push(i++);
                power = LONG_LONG_MAX;
            }
    }
    if(power != LONG_LONG_MAX)
    {
        if(neg)
            power*=-1;
        neg = false;
        if(power == 0){
            for(int j = 1; j < k;j++)
                cout << j << " ";
            cout << i;
            return;
        }
        weapons[power/10].push(i++);
        power = LONG_LONG_MAX;
    }

    vector<int> indices;
    for(auto it = weapons.begin(); k > 0; it++) {
        while (k > 0 && it->second.size()) {
            indices.pb(it->second.front());
            it->second.pop();
            k--;
        }
    }
    sort(indices.begin(),indices.end());
    for(auto& it : indices)
        cout << it << " ";
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