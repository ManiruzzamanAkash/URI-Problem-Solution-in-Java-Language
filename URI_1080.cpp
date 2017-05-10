#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, max = -1, p;
	for (int i = 1; i < 101; ++i)
	{
		scanf("%d", &n);
		if(max < n)
			max = n, p = i;
	}

	printf("%d\n%d\n", max, p);

	return 0;
}