#include <bits/stdc++.h>
using namespace std;
char nonrepeatingCharacter(string S)
{
    //Your code here
    unordered_map<char, int> m, n;
    queue<char> q;
    for(char x : S){
        m[x]++;
        q.push(x);
    }
    while(!q.empty()){
        char x = q.front();
        q.pop();
        if(m[x] == 1)
        {
            return x;
        }
    }
    return '$';
}

int main(){
    cout << nonrepeatingCharacter("hello");
};