#include <cstdio>

int main()
{
	double a;
	double b;

	scanf("%lf", &a);
	scanf("%lf", &b);

	printf("%.3lf km/l\n", a / b);

	return 0;
}