#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a, b, c;
	bool ver = false;

	cin >> a >> b >> c;

	float mod = b - c;
	if(mod < 0)
		mod = -mod;

	if(mod < a && a < (b + c)){
		cout << "Perimetro = " << fixed << setprecision(1) << (a + b + c) << endl;	
	}else{
		cout << "Area = " << fixed << setprecision(1) << ((a + b) * c) / 2 << endl;	
	}

	return 0;
}