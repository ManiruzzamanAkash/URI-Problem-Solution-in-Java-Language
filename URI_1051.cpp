#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float n, r, f1, f2, f3;
	cin >> n;

	if(n <= 2000){
		cout << "Isento" << endl;
	}else{
		if(n > 2000 && n <= 3000){
			f1 = n - 2000;
			f1 = ((f1 * 8) / 100);
			r = f1;
		}else if(n > 3000 && n <= 4500){
			f1 = n - 2000;
			f2 = f1 - 1000;
			f1 -= f2;
			f1 = ((f1 * 8) / 100);
			f2 = ((f2 * 18) / 100);
			r = f2 + f1;
		}else{
			f1 = n - 2000;
			f2 = f1 - 1000;
			f3 = f2 - 1500;
			f1 -= f2;
			f2 -= f3;
			f1 = ((f1 * 8) / 100);
			f2 = ((f2 * 18) / 100);
			f3 = ((f3 * 28) / 100);
			r = f3 + f2 + f1;
		}

		cout << "R$ " << fixed << setprecision(2) << r << endl;
	}

	return 0;
}