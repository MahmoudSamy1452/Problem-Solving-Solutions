#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	const int starting = n;
	n = 1;
	while (m)
	{
		if (n == starting + 1)
		{
			n = 1;
		}
		if (m >= n)
			m -= n;
		else 
			break;
		n++;
	}
	cout << m;
}