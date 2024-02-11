#include <iostream>
using namespace std;

int main()
{
	int t, n, x, count;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		count = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x)
			{
				count++;
			}
		}
		cout << count << endl;
	}
}