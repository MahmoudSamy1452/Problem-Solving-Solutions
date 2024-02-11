#include <iostream>
using namespace std;

int main()
{
	long long a, b, a1, a2, b1, b2;
	cin >> a >> b >> a1 >> a2 >> b1 >> b2;
	if(a1 + b1 <= a)
	{
		if(a2 + b2 <= b)
		{
			cout << "YES";
			return 0;
		}
	}
	if (a1 + b2 <= a)
	{
		if (a2 + b1 <= b)
		{
			cout << "YES";
			return 0;
		}
	}
	if (a2 + b1 <= a)
	{
		if (a1 + b2 <= b)
		{
			cout << "YES";
			return 0;
		}
	}
	if (a2 + b2 <= a)
	{
		if (a1 + b1 <= b)
		{
			cout << "YES";
			return 0;
		}
	}
	if (a1 + b1 <= b)
	{
		if (a2 + b2 <= a)
		{
			cout << "YES";
			return 0;
		}
	}
	if (a1 + b2 <= b)
	{
		if (a2 + b1 <= a)
		{
			cout << "YES";
			return 0;
		}
	}
	if (a2 + b1 <= b)
	{
		if (a1 + b2 <= a)
		{
			cout << "YES";
			return 0;
		}
	}
	if (a2 + b2 <= b)
	{
		if (a1 + b1 <= a)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}