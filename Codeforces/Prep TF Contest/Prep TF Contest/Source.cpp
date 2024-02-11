#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	for (int i = 0; i < n-1; i++)
	{
		if (str[i] == '1' && str[i + 1] == '1')
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";

}