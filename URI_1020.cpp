#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	int a = n / 365;
	int rA = n % 365;
	int rM = rA % 30;
	int m = rA / 30;
	int d = rM % 30;
	
	cout << a << " ano(s)" << endl << m << " mes(es)" << endl << d << " dia(s)" << endl;
	
	return 0;
}