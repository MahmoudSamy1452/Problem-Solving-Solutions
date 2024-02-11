#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	bool is_not_beautiful = false;
	cin >> n;
	int arr[4];
	while (!is_not_beautiful)
	{
		n++;
		arr[0] = n / 1000;
		arr[1] = (n % 1000) / 100;
		arr[2] = (n % 100) / 10;
		arr[3] = n % 10;
		
		for (int i = 0; i < 3; i++)
		{
			for (int j = i+1; j < 4; j++)
			{
				if (arr[i] == arr[j])
				{
					is_not_beautiful = false;
					break;
				}
				else
					is_not_beautiful = true;
			}
			if (!is_not_beautiful)
				break;
		}
	}
	n = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
	cout << n << endl;
}