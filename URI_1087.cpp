#include <cstdio>
#include <cmath>

using namespace std;

int abss(int a) {
	return a < 0 ? -a : a;
}

int main()
{
	int X1, Y1, X2, Y2 = 0;
	int res, res2 =0;
	
	scanf("%d", &X1);
	scanf("%d", &Y1);
	scanf("%d", &X2);
	scanf("%d", &Y2);
	
	
	while(X1 != 0 && Y1 != 0 && X2 != 0 && Y2 != 0)
	{
		if(X1 == X2 && Y1 == Y2)
		{
			printf("0\n");
		}else if(X1 == X2 || Y1 == Y2)
		{
			printf("1\n");
		}else
		{
			res = abss(X1 - X2);
			res2 = abss(Y1 - Y2);
		
			if(res - res2 == 0)
			{
				printf("1\n");
			}else
			{
				printf("2\n");
			}
		}
		
	
		scanf("%d", &X1);
		scanf("%d", &Y1);
		scanf("%d", &X2);
		scanf("%d", &Y2);
	}
	return 0;
}
