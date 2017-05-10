#include <cstdio>

int main()
{
	double a;
	double b;

	scanf("%lf", &a);
	scanf("%lf", &b);

	double m = (a/11 * 3.5) + (b/11 * 7.5);

	printf("MEDIA = %.5lf\n", m);

	return 0;
}