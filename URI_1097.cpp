#include <cstdio>

int main()
{
	int i, j, tmp, x;

	for (i = 1, j = 7, tmp = 0, x = 7; i <= 9; j--)
	{
		

		if(tmp == 3){
			i += 2;
			x += 2;
			j = x;
			tmp = 0;
		}

		if(i > 9)
			return 0;

		printf("I=%i J=%i\n", i, j);
		tmp++;

	}

	return 0;
}