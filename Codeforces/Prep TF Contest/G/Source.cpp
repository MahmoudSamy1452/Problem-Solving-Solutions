#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, n, countp = 0;
	string str;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		countp = 0;
		cin >> n >> str;
		for(int i = n-1; i >= 0; i--)
		{
			if (str[i] == ')')
				countp++;
			else
				break;
		}
		if (countp > n-countp)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}