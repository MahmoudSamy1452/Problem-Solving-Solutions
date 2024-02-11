#include <iostream>
using namespace std;

int main()
{
	int t, T, O, c;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		c = 0;
		cin >> T;
		for (int j = 0; j < 3; j++)
		{
			cin >> O;
			if(O > T)
			c++;
		}
		cout << c << endl;
	}
	
}