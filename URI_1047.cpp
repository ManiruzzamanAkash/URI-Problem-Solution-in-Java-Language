#include <iostream>

using namespace std;

int main()
{
	int hi, mi, hf, mf;
	int ctrh = 0, ctrm = 0;

	cin >> hi >> mi >> hf >> mf;

	if(hi == hf && mi == mf){
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
		return 0;
	}

	if(hi == hf && mi != mf){
		hi++;
		while(mi != mf)
		{
			ctrm++;
			mi++;
			if(mi == 61)
				mi = 1;
		}

		while(hi != hf)
		{
			ctrh++;
			hi++;
			if(hi == 25)
				hi = 1;
		}

	}

	while(mi != mf)
	{
		ctrm++;
		mi++;
		if(mi == 61){
			mi = 1;
			ctrh--;
		}
	}

	while(hi != hf)
	{
		ctrh++;
		hi++;
		if(hi == 25)
			hi = 1;
	}

	
	cout << "O JOGO DUROU " << ctrh << " HORA(S) E " << ctrm << " MINUTO(S)" << endl;

	return 0;
}