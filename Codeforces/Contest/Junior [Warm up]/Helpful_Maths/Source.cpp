#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eqn;
	cin >> eqn;
	const int n = eqn.length();
	char temp;
	for (int i = 0; i < n; i+=2)
	{
		for (int j = i; j < n; j+=2)
		if (eqn[i] > eqn[j])
		{
			temp = eqn[i];
			eqn[i] = eqn[j];
			eqn[j] = temp;
		}
	}
	cout << eqn;

}