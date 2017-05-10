#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, x;
	int pos = 0, val = 0, tmp = 0;
	bool ver = false;

	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		v.push_back(x);
	}
 
	for (int i = 0; i < n; ++i)
	{
		tmp = v[i];
		if(ver == false){
			val = tmp;
			ver = true;
		}
		if(tmp < val){
			val = tmp;
			pos = i;
		}

	}

	cout << "Menor valor: " << val << endl << "Posicao: " << pos << endl;

	return 0;
}
