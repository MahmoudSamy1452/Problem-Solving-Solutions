#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int n, notGreat;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int j, k, temp;
		cin >> j >> k;
		int notGreat = k, Great = j;
		temp = j;
		while(temp > 10)
		{
			if((j%10) != 0)
			{
				notGreat = j;
				Great = k;
				break;
			}
			temp /= 10;
		}
		int rounded = ceil(notGreat);
		int diff = rounded - notGreat;
		cout << rounded << " x " << Great;
		if (diff > 0)
		{
			cout << " + ";
		}else
		{
			cout << " - ";
		}
		cout << abs(diff) << " x " << Great;
	}
}