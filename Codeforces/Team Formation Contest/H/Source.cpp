#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[30];
	
	string S1;
	string S2;

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int i = 0; i < 30; i++)
		{
			arr[i] = 0;
		}
		cin >> S1;
		cin >> S2;
		for (int i =0; i < S1.length(); i++)
		{
			arr[S1[i]-97] ++;
		}
		for (int i = 0; i < S2.length(); i++)
		{
			arr[S2[i]-97] --;
		}
		for (int i = 0; i < 30; i++)
		{
			count += abs(arr[i]);
		}
		cout << count << endl;
	}

}