#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	int c = 0;
	cin >> name;
	for(int i = 0; i < name.length(); i++){
		for(int j = i+1; j < name.length(); j++){
			if(name[i] == name[j]){
				break;
			}
			if(j == name.length()-1)
				c++;
		}
	}
	if(!(c%2)){
		cout << "IGNORE HIM!" << endl;
	}
	else{
			cout << "CHAT WITH HER!" << endl;
	}
}