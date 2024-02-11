#include <iostream>
using namespace std;

int main()
{
	int k, q, d, c = 0;
	long long n, a ,b;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> k >> n >> a >> b;
		if (b*n >= k)
		{
			c = -1;
		} else
		{
			d = k - n * b - 1;
			c = d / (a-b);
			if (c > n)
			{
				c = n;
			}
		}

		cout << c << endl;
	}
	
	return 0;
}