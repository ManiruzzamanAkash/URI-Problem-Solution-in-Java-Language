#include <iostream>
using namespace std;

int main()
{
	int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0;
	int n, tmp;

	cin >> n;
	tmp = n;

	if((n / 100) == 0){
		if((n / 50) == 0){
			if((n / 20) == 0){
				if((n / 10) == 0){
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}else{
					nota10 = n / 10;
					n = n - (nota10 * 10);
					//bloco 5
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}
			}else{
				nota20 = n / 20;
				n = n - (nota20 * 20);
				//bloco 10
				if((n / 10) == 0){
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}else{
					nota10 = n / 10;
					n = n - (nota10 * 10);
					//bloco 5
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}
			}
		}else{
			nota50 = n / 50;
			n = n - (nota50 * 50);
			//bloco 20
			if((n / 20) == 0){
				if((n / 10) == 0){
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}else{
					nota10 = n / 10;
					n = n - (nota10 * 10);
					//bloco 5
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}
			}else{
				nota20 = n / 20;
				n = n - (nota20 * 20);
				//bloco 10
				if((n / 10) == 0){
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}else{
					nota10 = n / 10;
					n = n - (nota10 * 10);
					//bloco 5
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}
			}
		}

	}else{
		nota100 = n / 100;
		n = n - (nota100 * 100);

		if((n / 50) == 0){
			if((n / 20) == 0){
				if((n / 10) == 0){
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}else{
					nota10 = n / 10;
					n = n - (nota10 * 10);
					//bloco 5
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}
			}else{
				nota20 = n / 20;
				n = n - (nota20 * 20);
				//bloco 10
				if((n / 10) == 0){
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}else{
					nota10 = n / 10;
					n = n - (nota10 * 10);
					//bloco 5
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}
			}
		}else{
			nota50 = n / 50;
			n = n - (nota50 * 50);
			//bloco 20
			if((n / 20) == 0){
				if((n / 10) == 0){
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}else{
					nota10 = n / 10;
					n = n - (nota10 * 10);
					//bloco 5
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}
			}else{
				nota20 = n / 20;
				n = n - (nota20 * 20);
				//bloco 10
				if((n / 10) == 0){
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}else{
					nota10 = n / 10;
					n = n - (nota10 * 10);
					//bloco 5
					if((n / 5) == 0){		
						nota2 = n / 2;
						n = n - (nota2 * 2);
						
					}else{
						nota5 = n / 5;
						n = n - (nota5 * 5);
						//bloco 2
						nota2 = n / 2;
						n = n - (nota2 * 2);
					}
				}
			}
		}
	}

	cout << tmp << endl;
	cout << nota100 << " nota(s) de R$ 100,00" << endl;
	cout << nota50 << " nota(s) de R$ 50,00" << endl;
	cout << nota20 << " nota(s) de R$ 20,00" << endl;
	cout << nota10 << " nota(s) de R$ 10,00" << endl;
	cout << nota5 << " nota(s) de R$ 5,00" << endl;
	cout << nota2 << " nota(s) de R$ 2,00" << endl;
	cout << n << " nota(s) de R$ 1,00" << endl;

	return 0;
}