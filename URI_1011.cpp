#include <cstdio>
#include <cmath>

int main()
{
	int a;

	scanf("%i", &a);
	printf("VOLUME = %.3lf\n", (4 * 3.14159 * pow(a, 3)) / 3);

	return 0;
}