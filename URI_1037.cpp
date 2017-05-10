#include <iostream>

using namespace std;

int main()
{
	float n;

	cin >> n;

	if(n < 0 || n > 100){
		cout << "Fora de intervalo" << endl;
	}else{
		if(n >= 0 && n <= 25){
			cout << "Intervalo [0,25]" << endl;
		}else if(n > 25 && n <= 50){
			cout << "Intervalo (25,50]" << endl;
		}else if(n > 50 && n <= 75){
			cout << "Intervalo (50,75]" << endl;
		}else{
			cout << "Intervalo (75,100]" << endl;
		}
	}

	return 0;
}