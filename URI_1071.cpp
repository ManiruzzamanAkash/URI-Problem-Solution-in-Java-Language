#include <iostream>

using namespace std;

int main()
{
	int x, y, tmp = 0;
	int min, max;
	
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
	
	return 0;
}