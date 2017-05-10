#include <iostream>

using namespace std;

int main()
{
	int i, f;
	int ctr = 0;

	cin >> i >> f;

	if(i == f){
		cout << "O JOGO DUROU 24 HORA(S)" << endl;
		return 0;
	}

	while(i != f)
	{
		ctr++;
		i++;
		if(i == 25)
			i = 1;
	}

	cout << "O JOGO DUROU " << ctr <<  " HORA(S)" << endl;

	return 0;
}