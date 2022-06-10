#include <iostream>
using namespace std;

int main()
{
	int n, k, cnt = 0;
	cin >> k >> n;

	while (k >= n)
	{
		cnt++;
		k -= n;
		k++;
	}

	cout << cnt;
	return 0;
}