#include <cstdio>

#define SC4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, c, d;
	SC4(a, b, c, d);

	if((b > c) && (d > a) && (c + d > a + b) && c > 0 && c > 0 && (a % 2 == 0)) puts("Valores aceitos");
	else puts("Valores nao aceitos");

	return 0;
}