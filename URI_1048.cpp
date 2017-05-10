#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float n, tmp, per;

	cin >> n;

	if(n <= 400){
		per = 15;
		tmp = n + ((n * per) / 100);
	}else if(n > 400 && n <= 800){
		per = 12;
		tmp = n + ((n * per) / 100);
	}else if(n > 800 && n <= 1200){
		per = 10;
		tmp = n + ((n * per) / 100);	
	}else if(n > 1200 && n <= 2000){
		per = 7;
		tmp = n + ((n * per) / 100);
	}else{
		per = 4;
		tmp = n + ((n * per) / 100);
	}

	cout << "Novo salario: " << fixed << setprecision(2) << tmp << endl;
	cout << "Reajuste ganho: " << fixed << setprecision(2) << (tmp - n) << endl;
	cout << "Em percentual: " << fixed << setprecision(0) << per << " %" << endl;

	return 0;
}


