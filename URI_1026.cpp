#include <iostream>
using namespace std;

int main()
{
	unsigned long int x, y, r;

	while(cin >> x >> y)
	{
		r = x ^ y;
		cout << r << endl;
	}

	return 0;
}