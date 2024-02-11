#include <iostream>
using namespace std;

int main()
{
	int n, response, is_hard = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> response;
		if (response)
		{
			is_hard = 1;
			break;
		}
		
	}
	if (is_hard)
		cout << "HARD" << endl;
	else
		cout << "EASY" << endl;
}