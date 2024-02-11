#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool notfound = true;
	int num, units;
	cin >> num;

	units = num % 10;
	if (num > 10)
	{
		num -= (units+1);
	}

	string str = to_string(num);
	int len = str.length();
	int i = 0;

	while(notfound && i < len)
	{
		if (str[i] == '0')
		{
			notfound = false;
			break;
		}
		i++;
	}
	long long product = 1;

	if (!notfound)
	{
		for (int j = 0; j < len - 1; j++)
		{
			product *= 9;
		}
		cout << product;
		return 0;
	}
	
	for (int i = 0; i < len; i++)
	{
		product *= (str[i]-48);
	}
	cout << product;
}