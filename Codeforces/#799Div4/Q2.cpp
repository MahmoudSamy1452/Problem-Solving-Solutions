#include <iostream>
using namespace std;

int main(){
	int t, s, c;
	cin >> t;
	for (int i = 0; i < t; i++){
		c = 0;
		cin >> s;
		int* arr = new int[s];
		for(int j = 0; j < s; j++)
		{
			cin >> arr[j];
		}
		for(int j = 0; j < s; j++){
			if(arr[j] == 0)
				continue;
			for(int k = j+1; k < s; k++)
			{
				if (arr[j] == arr[k])
				{
					arr[k] = 0;
					c++;
				}
			}
		}
		if (s%2){
			cout << s-c-1 << endl;
			continue;
		}
		cout << s-c << endl;
	}
}