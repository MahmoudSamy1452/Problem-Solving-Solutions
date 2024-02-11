#include <iostream>
using namespace std;

int main()
{
	int t, n, temp;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = i+1; j<n; j++)
			{
				if (arr[j] < arr[i])
				{
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
		if (n == 1)
		{
			cout << "YES" << endl;
		}
		for (int i = 0; i < n-1; i++)
		{
			if ((arr[i + 1] - arr[i]) > 1)
			{
				cout << "NO" << endl;
				break;
			}
			if (i == n - 2)
				cout << "YES" << endl;
		}
		delete[] arr;
	}
}