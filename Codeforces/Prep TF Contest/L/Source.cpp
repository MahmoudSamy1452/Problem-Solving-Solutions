#include <iostream>
using namespace std;

int main()
{
	int t, n, b, w;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> b >> w;
		if (b < n/2 +1 || w < n/2)
		{
			cout << "NO" << endl;
		}else
		{
			cout << "YES" << endl;
		}
	}
}