#include <cstdio>

int main()
{
	int a;
	int b;
	int c;
	int tmp;

	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);

	tmp = a;
	if(a < b || a < c){
		if(b < c){
			tmp = c;
		}else{
			tmp = b;
		}
	}

	printf("%i eh o maior\n", tmp);

	return 0;
}