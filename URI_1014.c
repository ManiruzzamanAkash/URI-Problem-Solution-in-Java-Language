#include <stdio.h>

int main()
{
	double a, b;

	scanf("%lf %lf", &a, &b);

	printf("%.3lf km/l\n", a / b);

	return 0;
}
