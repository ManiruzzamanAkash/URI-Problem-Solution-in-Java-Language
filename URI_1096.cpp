#include <cstdio>

int main()
{
	int i, j;

	for (i = 1, j = 7; i <= 9; j--)
	{
		printf("I=%i J=%i\n", i, j);

		if(j == 5){
			i += 2;
			j = 8;
		}

	}

	return 0;
}