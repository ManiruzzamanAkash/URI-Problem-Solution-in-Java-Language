#include <iostream>

using namespace std;

int main()
{
	int number = 1;

	while(number != 2002)
	{
		cin >> number;
		if(number == 2002){
			cout << "Acesso Permitido" << endl;
			return 0;
		}else{
			cout << "Senha Invalida" << endl;
		}

	}

	return 0;
}
