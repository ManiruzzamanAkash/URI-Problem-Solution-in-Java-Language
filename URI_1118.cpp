#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float x = -1, y = -1;
	int value = 1;

	while(value == 1)
	{
		do{
			cin >> x;
			if(x < 0 || x > 10)
				cout << "nota invalida" << endl;

		}while(x < 0 || x > 10);

		do{
			cin >> y;
			if(y < 0 || y > 10)
				cout << "nota invalida" << endl;

		}while(y < 0 || y > 10);

		cout << "media = " << fixed << setprecision(2) << ((x + y) / 2)	<< endl;

		do{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> value;

		}while(value != 1 && value != 2);
	}

	return 0;
}
