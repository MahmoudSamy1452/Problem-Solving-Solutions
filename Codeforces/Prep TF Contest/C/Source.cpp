#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	bool Prime;
	int n, m;
	cin >> n >> m;
	for (int i = n+1; i <= m; i++)
	{
		Prime = true;
		for (int j = 2; j < i; j++)
		{
			if(i%j == 0)
			{
				Prime = false;
				break;
			}
		}
		if ((Prime && i != m) || (i==m && !Prime))
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}