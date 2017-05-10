#include <iostream>

using namespace std;

int main()
{
	int n, x, tmp = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; ++i)
	{
		cin >> x;
		if(x >= 10 && x <= 20)
			tmp++;
	}
	
	cout << tmp << " in" << endl << (n - tmp) << " out" << endl;
	
	return 0;
}