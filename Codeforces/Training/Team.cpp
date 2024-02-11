#include <iostream> 
using namespace std;

int main(){
	int q, s, c = 0, cT = 0;
	cin >> q;
	for(int i = 0; i < q; i++){
		c = 0;
		for (int j = 0; j < 3; j++){
			cin >> s;
			if(s){
				c++;
			}
		}
		if(c >= 2)
			cT++;
	}
	cout << cT;
}