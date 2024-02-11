#include <iostream>
using namespace std;

int main(){
	int n, h, c = 0, f;
	cin >> n >> h;
	for(int i = 0; i < n; i++){
		cin >> f;
		if(f<=h)
			c++;
		else
			c+=2;
	}
	cout << c << endl;
}
