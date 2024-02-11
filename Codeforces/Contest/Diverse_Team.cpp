#include <iostream>
using namespace std;

int main()
{
	int n,k,rating;
	cin >> n >> k;
	int * arrDistinct = new int[n];
	int c = 0;
	int z = 0;
	int x = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> rating;
		arrDistinct[c] = rating;
		for (int j = 0; j < c; j++)
		{
			if (arrDistinct[j] == rating)
			{
				arrDistinct[c] = 0;
				z++;
				break;
			}
		}
		c++;
	}

	if ((n-z) >= k)
	{
		cout << "YES" << endl;
		for (int i = 0; i < n; i++)
		{
			if (arrDistinct[i] > 0 && x < k)
				{
					cout << i+1 << " ";
					x++;
				}
		}
		cout << endl;
	}
	else 
		cout << "NO" << endl;
}