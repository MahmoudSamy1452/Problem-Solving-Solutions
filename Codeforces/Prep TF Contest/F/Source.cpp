#include <iostream>
using namespace std;

int main()
{
	bool found = false;
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		found = false;
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n-2; i++)
		{
			for (int j = i+2; j < n; j++)
			{
				if (arr[i]+ arr[i+1]  <= arr[j])
				{
					cout << i + 1 << " " << i + 2 << " " << j + 1 << endl;
					found = true;
					break;
				}
			}
			if (found)
			{
				break;
			}
		}
		if (!found)
		{
			cout << -1 << endl;
		}
	}
}