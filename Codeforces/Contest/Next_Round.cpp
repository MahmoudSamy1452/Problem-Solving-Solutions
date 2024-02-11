#include <iostream>
using namespace std;

int main(){
	int n, k, score, kth_score;
	cin >> n >> k;
	int c = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> score;
		if (score <= 0)
		{
			break;
		}
		if (k == c)
		{
			kth_score = score;
		}else if (c > k && score < kth_score)
		{
			break;
		}
		c += 1;
	}
	cout << c-1;
}