#include <cstdio>

int main()
{
	int a;
	int tmp = 0;

	for (int i = 0; i < 5; ++i)
	{
		scanf("%i", &a);
		if(a < 0){
			a = -a;
		}

		if(a % 2 == 0){
			tmp++;
		}
	}

	printf("%i valores pares\n", tmp);

	return 0;
}