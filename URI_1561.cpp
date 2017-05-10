#include <cstdio>

using namespace std;

int h8, h4, h2, h1, m32, m16, m8, m4, m2, m1;

void printWatch(int h, int m)
{
	h8 = h4 = h2 = h1 = m32 = m16 = m8 = m4 = m2 = m1 = 0;

	h8 = h / 8; h %= 8;
	h4 = h / 4; h %= 4;
	h2 = h / 2; h %= 2;

	m32 = m / 32; m %= 32;
	m16 = m / 16; m %= 16;
	m8 = m / 8; m %= 8;
	m4 = m / 4; m %= 4;
	m2 = m / 2; m %= 2;


	printf(" ____________________________________________\n");
	printf("|                                            |\n");
	printf("|    ____________________________________    |_\n");
	printf("|   |                                    |   |_)\n");
	printf("|   |   8         4         2         1  |   |\n");
	printf("|   |                                    |   |\n");
	
	printf("|   |   ");
	if(h8 == 1) printf("o         ");
	else printf("          ");
	if(h4 == 1) printf("o         ");
	else printf("          ");
	if(h2 == 1) printf("o         ");
	else printf("          ");
	if(h == 1) printf("o  |   |\n");
	else printf("   |   |\n");

	printf("|   |                                    |   |\n"); 
	printf("|   |                                    |   |\n");
	
	printf("|   |   ");
	if(m32 == 1) printf("o     ");
	else printf("      ");
	if(m16 == 1) printf("o     ");
	else printf("      ");
	if(m8 == 1) printf("o     ");
	else printf("      ");
	if(m4 == 1) printf("o     ");
	else printf("      ");
	if(m2 == 1) printf("o     ");
	else printf("      ");
	if(m == 1) printf("o  |   |\n");
	else printf("   |   |\n");

	printf("|   |                                    |   |\n");
	printf("|   |   32    16    8     4     2     1  |   |_\n");
	printf("|   |____________________________________|   |_)\n");
	printf("|                                            |\n");
	printf("|____________________________________________|\n");
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int h, m;
	char w[5];

	while(scanf("%s", &w) == 1)
	{
		h = ((w[0] - '0') * 10) + (w[1] - '0');
		m = ((w[3] - '0') * 10) + (w[4] - '0');
		printWatch(h, m);
	}

	return 0;
}