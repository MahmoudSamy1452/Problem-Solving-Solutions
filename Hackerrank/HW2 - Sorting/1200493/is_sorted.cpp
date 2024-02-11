#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
  string input_path = argv[1];
  freopen(input_path.c_str(), "r", stdin);
  vector<int> A;
  int number;
  while (cin >> number)
  {
    A.push_back(number);
  }
  fclose(stdin);
  for (int i = 1; i < A.size(); i++)
  {
    if (A[i - 1] > A[i])
    {
      cout << input_path << " NO" << '\n';
      return 0;
    }
  }
  cout << input_path << " YES" << "\n";
  return 0;
}