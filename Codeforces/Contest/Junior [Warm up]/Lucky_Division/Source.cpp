#include <iostream>
using namespace std;

int main()
{
	int n,d;
	bool almost_lucky = false;
	cin >> n;
	for (int i = 0; i <= 8; i += 4)
	{
		for (int j = 0; j <= 8; j += 4)
		{
			for (int k = 4; k < 8; k += 3){
				if (i == 8)
					i--;
				if (j == 8)
					j--;
				d = i * 100 + j * 10 + k;
				if (n % d == 0)
				{
					almost_lucky = true;
					break;
				}
			}
		}
	}
	if (almost_lucky)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}