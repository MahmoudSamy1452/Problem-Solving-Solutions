#include <iostream>
using namespace std;

int main()
{
	int n, total1 = 0, total2 = 0;
	cin >> n;
	int* arr = new int[2*n];


	for (int i = 0; i < 2 * n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		total1 += arr[i];
		total2 += arr[i + n];
	}

	bool switched = false;
	if (total1 == total2)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = n; j < 2 * n; j++)
			{
				if (arr[j] != arr[i])
				{
					int hold = arr[i];
					arr[i] = arr[j];
					arr[j] = hold;
					switched = true;
					break;
				}
			}
			if (switched)
			{
				break;
			}
		}
	}

	if (!switched && total1 == total2)
	{
		cout << -1;
		return 0;
	}
	for (int i = 0; i < 2*n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;


}