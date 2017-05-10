#include <cstdio>

int main()
{
	int n;

	scanf("%i", &n);

	for (int i = 0; i <= n; ++i)
	{
		if(i % 2 == 1)
			printf("%i\n", i);
	}

	return 0;
}