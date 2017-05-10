#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	double q, coelho = 0, rato = 0, sapo = 0; 
	char t;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> q >> t;

		if(t == 'C'){
			coelho += q;
		}else if(t == 'R'){
			rato += q;
		}else{
			sapo += q;
		}
	}

	double total = (coelho + rato + sapo);
	double c = ((100 * coelho) / total);
	double r = ((100 * rato) / total);
	double s = ((100 * sapo) / total);

	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << coelho << endl;
	cout << "Total de ratos: " << rato << endl;
	cout << "Total de sapos: " << sapo << endl;
	cout << "Percentual de coelhos: " << fixed << setprecision(2) << c << " %" << endl;
	cout << "Percentual de ratos: " << fixed << setprecision(2) << r << " %" << endl;
	cout << "Percentual de sapos: " << fixed << setprecision(2) << s << " %" << endl;

	return 0;
}