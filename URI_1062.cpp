#include <cstdio>
#include <stack>

using namespace std;

#define sc1(a) scanf("%d", &a)
#define fr(i, a, n) for(int i = (a); i < (n); i++)
#define fe(i, a, n) for(int i = (a); i <= (n); i++)

typedef stack<int> si;
 
int vet[1005];

int main(int argc, char const *argv[])
{
	int i, curr, n, top;

	while(sc1(n) && n)
	{
		while(sc1(vet[0]) && vet[0])
		{
			fr(i, 1, n)
				sc1(vet[i]);

			si p;
			curr = 0;

			fe(i, 1, n)
			{
				p.push(i);

				while(p.size() > 0 && vet[curr] == p.top())
				{
					curr++;
					p.pop();
				}
			}

			(p.size() == 0) ? puts("Yes") : puts("No");
		}

		printf("\n");
	}

	return 0;
}