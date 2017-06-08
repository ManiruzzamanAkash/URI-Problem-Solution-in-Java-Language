#include <stdio.h>


int main()
{
	int d;

	scanf("%d", &d);

	int t = d/((90 / 60.0) - (60 / 60.0));

	printf("%d minutos\n", t);

	return 0;
}
