#include <cstdio>

int main()
{
	int n;

	scanf("%i", &n);

	for (int i = 1; i <= 10000; ++i)
	{
		if(i % n == 2){
			printf("%i\n", i);
		}
	}

	return 0;
}