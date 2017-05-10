#include <cstdio>
/*

5
6
7
8
DIFERENCA = -26
0
0
7
8
DIFERENCA = -56
*/
int main()
{
	int a;
	int b;
	int c;
	int d;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	printf("DIFERENCA = %d\n", a * b - c * d);

	return 0;
}
