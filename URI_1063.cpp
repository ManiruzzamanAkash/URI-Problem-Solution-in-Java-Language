#include <iostream>
#include <stack>

#define sc1(a) scanf("%c", &a)
#define fr(i, a, n) for(int i = (a); i < (n); i++)

using namespace std;

typedef stack<char> si;
char in[27], out[27];

int main(int argc, char const *argv[])
{
	int n, tmp;

	while(cin >> n && n)
	{
		fr(i, 0, n)
			cin >> in[i];
		
		fr(i, 0, n)
			cin >> out[i];
		
		si p;
		tmp = 0;
		
		fr(i, 0, n)
		{
			p.push(in[i]);
			cout << "I";

			while (p.size() > 0 && out[tmp] == p.top())
			{
				tmp++;
				p.pop();
				cout << "R";
			}
		}

		if (p.size() != 0)
			cout << " Impossible";
		
		cout << '\n';
	}

	return 0;
}