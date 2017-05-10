#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	float x;
	vector<float> v;

	for (int i = 0; i < 3; ++i)
	{
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.begin() + 3);
	float a, b, c;

	c = v[0];
	b = v[1];
	a = v[2];

	if(a >= (b + c)){
		cout << "NAO FORMA TRIANGULO" << endl;
	}else{

		if(a*a == (b*b + c*c)){
			cout << "TRIANGULO RETANGULO" << endl;
		}else if(a*a > (b*b + c*c)){
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}else{
			cout << "TRIANGULO ACUTANGULO" << endl;
		}

		if(a == b && b == c){
			cout << "TRIANGULO EQUILATERO" << endl;
		}

		if((a == b && a != c) || (b == c && b != a) || (c == a && c != b)){
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}

	return 0;
}