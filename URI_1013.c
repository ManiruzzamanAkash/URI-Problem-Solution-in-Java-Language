#include <stdio.h>

int main()
{
	int a, b, c, tmp;

	scanf("%d %d %d", &a, &b, &c);

	tmp = a;
	if(a < b || a < c){
		if(b < c){
			tmp = c;
		}else{
			tmp = b;
		}
	}

	printf("%d eh o maior\n", tmp);

	return 0;
}
