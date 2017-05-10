#include <iostream>
using namespace std;

int main()
{
	string trash;
	int dia_i, dia_f, hora_i, hora_f, minuto_i, minuto_f, segundo_i, segundo_f;
	int ctr_d = 0, ctr_h = 0, ctr_m = 0, ctr_s = 0;
	bool ver_h = false, ver_m = false, ver_s = false;

	cin >> trash >> dia_i;
	cin >> hora_i >> trash >> minuto_i >> trash >> segundo_i;
	cin >> trash >> dia_f;
	cin >> hora_f >> trash >> minuto_f >> trash >> segundo_f;

	if(hora_i > hora_f)
		ver_h = true;

	if(minuto_i > minuto_f)
		ver_m = true;

	if(segundo_i > segundo_f)
		ver_s = true;

	while(dia_i != dia_f)
	{
		ctr_d++;
		dia_i++;
	}

	while(hora_i != hora_f)
	{
		ctr_h++;
		hora_i++;
		if(hora_i == 25)
			hora_i = 1;
	}

	while(minuto_i != minuto_f)
	{
		ctr_m++;
		minuto_i++;
		if(minuto_i == 61)
			minuto_i = 1;
	}

	while(segundo_i != segundo_f)
	{
		ctr_s++;
		segundo_i++;
		if(segundo_i == 61)
			segundo_i = 1;
	}

	if(ver_h == true)
		ctr_d--;

	if(ver_m == true)
		ctr_h--;

	if(ver_s == true)
		ctr_m--;

	cout << ctr_d << " dia(s)" << endl;
	cout << ctr_h << " hora(s)" << endl;
	cout << ctr_m << " minuto(s)" << endl;
	cout << ctr_s << " segundo(s)" << endl;

	return 0;
}