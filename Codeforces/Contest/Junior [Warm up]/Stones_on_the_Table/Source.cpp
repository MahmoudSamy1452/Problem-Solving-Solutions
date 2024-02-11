#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,c = 0;
	cin >> n;
	string colors;
	cin >> colors;
	for (int i = 0; i < n-1; i++)
	{
		if (colors[i] == colors[i + 1])
			c++;
	}
	cout << c << endl;
}