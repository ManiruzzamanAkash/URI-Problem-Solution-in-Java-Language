#include <iostream>

using namespace std;

int main()
{
	int d;

	cin >> d;

	int t = d/((90 / 60.0) - (60 / 60.0));
	
	cout << t << " minutos" << endl;

	return 0;
}