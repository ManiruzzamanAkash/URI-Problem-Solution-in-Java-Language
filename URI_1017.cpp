#include <cstdio>

int main()
{
	double a;
	double b;

	scanf("%lf", &a);
	scanf("%lf", &b);

	double r = (a * b)/12;
	printf("%.3lf\n", r);
	return 0;
}