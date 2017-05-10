#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	int dividendo, divisor, c;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;

		if(b > a){
			dividendo = b;
			divisor = a;
		}else{
			dividendo = a;
			divisor = b;
		}

		while(dividendo % divisor != 0)
		{
			c = dividendo % divisor;
			dividendo = divisor;
			divisor = c;
		}

		cout << divisor << endl;
	}

	return 0;
}

