#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, stairwaysC = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
		{
			stairwaysC++;
		}
	}
	cout << stairwaysC << endl;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] == 1)
		{
			cout << arr[i-1] << " ";
		}
	}
	cout << arr[n-1] << " " << endl;
}