#include <iostream>
#include <string>
using namespace std;

int main()
{
	string username;
	int duplicate = 0;
	cin >> username;
	for (int i = 0; i < username.length(); i++)
		for (int j = i + 1; j < username.length(); j++)
			if (username[i] == username[j])
			{
				duplicate++;
				break;
			}
	if ((username.length() - duplicate) % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;

}