#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, dCount = 0;
	string wins;
	cin >> n >> wins;
	for(int i = 0; i < n; i++){
		if(wins[i] == 'D')
			dCount++;
	}
	if (dCount > n-dCount)
		cout << "Danik";
	if(dCount < n-dCount)
		cout << "Anton";
	if(dCount == n-dCount)
		cout << "Friendship";
}