#include <iostream>
using namespace std;

int main()
{
	int t;
	long long n, l, r;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		l = -1 * (n - 1);
		r = n;
		cout << l << " " << r << endl;
	}
}