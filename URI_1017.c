#include <stdio.h>

int main()
{
	double a, b, r;

	scanf("%lf %lf", &a, &b);

	r = (a * b)/12;
	
	printf("%.3lf\n", r);
	return 0;
}
