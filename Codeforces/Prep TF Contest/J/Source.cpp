#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t, a;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a;
		cout << sqrt(a / 6) << endl;
	}
}