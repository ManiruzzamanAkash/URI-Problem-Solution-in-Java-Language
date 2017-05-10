#include <cstdio>

int array[10005];

int main()
{
	int n = 0;
	int i = 0;
	int x = 0;
	
	scanf("%d", &n);
	
	while(n != 0)
	{
		x = 0;
		for(i = 0; i < n; i++)
		{
		scanf("%d", &array[i]);
		}
	
		for(i = 0; i < n; i++)
		{
			if(array[i] < array[(i + 1)%n])
			{
				if(array[(i + 1)%n] > array[(i + 2)%n])
				{
					x++;
				}
				
			}
			
			if(array[i] > array[(i + 1)%n])
			{
				if(array[(i + 1)%n] < array[(i + 2)%n])
				{
					x++;
				}
				
			}
		}
		printf("%d\n", x);
		scanf("%d", &n);
		
	}
	
	return 0;
	
}
