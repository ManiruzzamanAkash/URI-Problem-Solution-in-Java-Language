#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int arr[300];

int main(int argc, char const *argv[])
{
	int i, j, n, c = 1, a, b, ta, tp, fp;
	double ip;
	bool bo = false;

	while(scanf("%d", &n) && n)
	{
		if(bo) printf("\n");
		bo = true;

		ta = tp = 0;
		memset(arr, 0, sizeof arr);

		for (i = 0; i < n; ++i)
		{
			scanf("%d %d", &a, &b);
			ta += b;
			tp += a;
			arr[b/a] += a;
		}

		printf("Cidade# %d:\n", c); c++;

		for(i = 0, j = 0; i < 300; i++)
		{
            if(arr[i] > 0){
                if(j != 0)
                    printf(" ");
                printf("%d-%d", arr[i], i);
                j++;   
            }  
        }
		printf("\n");

		fp = (int) (modf ((double)ta/tp, &ip) * 100);

		if(fp < 10) printf("Consumo medio: %d.0%d m3.\n", (int)ip, (int)fp);
		else printf("Consumo medio: %d.%d m3.\n", (int)ip, (int)fp);
	}

	return 0;
}