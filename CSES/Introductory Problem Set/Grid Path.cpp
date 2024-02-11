#include <iostream>
 
using namespace std;
 
typedef long long ll;
 
#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
 
string path;
bool is_visited[9][9];
ll count_possible_paths(const int &index, const int &i, const int &j){
  
  if(index == 48 && i == 7 && j == 1){
    return 1;
  }
 
  if(i == 7 && j == 1)
    return 0;
  
  if((is_visited[i-1][j] && is_visited[i+1][j] && !is_visited[i][j-1] && !is_visited[i][j+1])
  || (is_visited[i][j-1] && is_visited[i][j+1] && !is_visited[i-1][j] && !is_visited[i+1][j])
  ){
    return 0;
  }
 
  if (index == 48) return 0;
 
  is_visited[i][j] = 1;
  ll count = 0;
  switch(path[index]){
  case '?':
    if(!is_visited[i+1][j]) count += count_possible_paths(index+1, i+1, j);
    if(!is_visited[i-1][j]) count += count_possible_paths(index+1, i-1, j);
    if(!is_visited[i][j-1]) count += count_possible_paths(index+1, i, j-1);
    if(!is_visited[i][j+1]) count += count_possible_paths(index+1, i, j+1);
    break;
  case 'D':
    if(!is_visited[i+1][j]) count += count_possible_paths(index+1, i+1, j);
    break;
  case 'U':
    if(!is_visited[i-1][j]) count += count_possible_paths(index+1, i-1, j);
    break;
  case 'L':
    if(!is_visited[i][j-1]) count += count_possible_paths(index+1, i, j-1);
    break;
  case 'R':
    if(!is_visited[i][j+1]) count += count_possible_paths(index+1, i, j+1);
    break;
  }
 
  is_visited[i][j] = 0;
  return count;
}
 
void solve()
{
  cin >> path;
 
  for(int i = 0; i < 9; i++){
    is_visited[0][i] = 1;
    is_visited[8][i] = 1;
    is_visited[i][0] = 1;
    is_visited[i][8] = 1;
  }
 
  ll ans = count_possible_paths(0, 1, 1);
  cout << ans << '\n';
}
 
int main()
{
  fast_cin();
  ll t = 1;
  // cin >> t;
  for (int it = 1; it <= t; it++)
  {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}