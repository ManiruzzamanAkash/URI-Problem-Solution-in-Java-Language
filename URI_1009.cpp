#include <cstdio>

int main()
{
	double a;
	double b;
	char word[256];

	scanf("%s", &word);
	scanf("%lf", &a);
	scanf("%lf", &b);

	printf("TOTAL = R$ %.2lf\n", a + ((b/100)*15));

	return 0;
}