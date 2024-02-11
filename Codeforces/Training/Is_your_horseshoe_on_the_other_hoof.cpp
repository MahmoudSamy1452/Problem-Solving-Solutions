#include <iostream>
using namespace std;

int main(){
	int arr[4], c = 0;
	for(int i = 0; i < 4; i++){
		cin >> arr[i];
		for(int j = 0; j < i; j++){
			if (arr[i] == arr[j]){
					c++; 
					break;
			}
		}
	}
	cout << c;
}