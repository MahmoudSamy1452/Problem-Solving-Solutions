#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* start = new int(n);
	int* end = new int(n);

	for (int i = 0; i < n; i++)
	{
		cin >> start[i] >> end[i];
	}
}