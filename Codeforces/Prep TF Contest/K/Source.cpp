#include <iostream>
using namespace std;

int main()
{
	int dotC, colonC, bracketC;
	cin >> dotC >> colonC >> bracketC;
	if (dotC/2 + colonC < bracketC)
	{
		cout << dotC / 2 + colonC;
		return 0;
	}
	cout << bracketC;
}