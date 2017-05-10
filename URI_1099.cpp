#include <iostream>

using namespace std;

int main()
{
	int n, x, y;
	int min, max, tmp;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		tmp = 0;
		cin >> x >> y;

		if(x < y){
			min = x;
			max = y;
		}else{
			max = x;
			min = y;
		}

		for(int i = (min + 1); i < max; ++i)
		{
			if(i % 2 == 1 || i % 2 == -1){
				tmp += i;
			}
		}
	
		cout << tmp << endl;
	}


	return 0;
}