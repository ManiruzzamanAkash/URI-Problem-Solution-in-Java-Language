/* #include <stdio.h>

int main()
{
	double a, b, c, media;

	scanf("%lf%lf%lf", &a, &b, &c);

	media = (a/10 * 2) + (b/10 * 3) + (c/10 * 5);

	printf("MEDIA = %.1lf\n", media);

	return 0;
}

*/
#include <iostream>
using namespace std;

int main()
{
	double a, b, c, media;

	cin >> a >> b >> c;

	media = (a/10 * 2) + (b/10 * 3) + (c/10 * 5);

	cout << "MEDIA = "<< fixed << setPrecision(1) << media << endl;

	return 0;
}
