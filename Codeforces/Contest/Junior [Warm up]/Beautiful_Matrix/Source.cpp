#include <iostream>
using namespace std;

int main()
{
	int n, r, c, rmove, cmove;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cin >> n;
			if (n)
			{
				r = i;
				c = j;
			}
		}
	}
	if (r < 3)
		rmove = 3 - r;
	else
		rmove = r - 3;
	if (c < 3)
		cmove = 3 - c;
	else
		cmove = c - 3;
	cout << rmove + cmove;
}