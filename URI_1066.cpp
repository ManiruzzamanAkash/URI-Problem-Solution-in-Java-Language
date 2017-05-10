#include <iostream>

using namespace std;

int main()
{
	int n;
	int pos = 0, neg = 0, par = 0, im = 0;
	
	for(int i = 0; i < 5; ++i)
	{
		cin >> n;
		if(n > 0){
			pos++;
		}else{
			if(n != 0){
				neg++;
			}
		}
		
		if(n % 2 == 0){
			par++;
		}else{
			im++;
		}
	}
	
	cout << par << " valor(es) par(es)" << endl;
	cout << im << " valor(es) impar(es)" << endl;
	cout << pos << " valor(es) positivo(s)" << endl;
	cout << neg << " valor(es) negativo(s)" << endl;
	
	return 0;
}