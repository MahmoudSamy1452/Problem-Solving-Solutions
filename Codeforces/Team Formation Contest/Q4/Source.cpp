#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int inc_seq = 0;
	bool removed = false;
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i] >= arr[i + 1] && !removed)
		{
			removed = true;
			continue;
		}
		if (arr[i] < arr[i + 1])
		{
			inc_seq++;
			arr[i] = arr[i - 1];
		}
		else
		{
			inc_seq = 0;
			removed = false;
		}
	}
	cout << inc_seq;
}