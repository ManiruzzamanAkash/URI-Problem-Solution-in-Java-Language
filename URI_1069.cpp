#include <iostream>
using namespace std;

int main()
{
	int n, size, counter, tmp;
	string s;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		size = s.length();
		counter = 0;
		tmp = 0;

		for (int j = 0; j < size; ++j)
		{
			if(s[j] == '<')
				tmp++;
			if (s[j] == '>' && tmp > 0){
				counter++;
				tmp--;
			}
		}

		cout << counter << endl;
	}

	return 0;
}