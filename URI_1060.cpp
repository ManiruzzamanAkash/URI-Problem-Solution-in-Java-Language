#include <cstdio>

int main()
{
	double n;
	int tmp = 0;

	for (int i = 0; i < 6; ++i)
	{
		scanf("%lf", &n);
		if(n > 0)
			tmp++;
	}

	printf("%i valores positivos\n", tmp);

	return 0;
}