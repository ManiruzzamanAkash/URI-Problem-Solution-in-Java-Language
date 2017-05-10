#include <iostream>

using namespace std;

int main()
{
	int x, tmp = 0;
	bool ver = false;
	
	cin >> x;
	
	while(ver == false)
	{
		if(x % 2 == 1){
			cout << x << endl;
			tmp++;
		}
		
		if(tmp == 6)
			return 0;
			
		x++;
	}
	
	return 0;
}