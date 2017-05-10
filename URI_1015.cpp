#include <cstdio>
#include <cmath>

int main()
{
	int x1;
	int x2; 
	int y1;
	int y2;
	double dist;

	scanf("%i", &x1);
	scanf("%i", &y1);
	scanf("%i", &x2);
	scanf("%i", &y2);

	dist = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

	printf("%.4lf\n", dist);
	return 0;
}