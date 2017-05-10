#include <cstdio>

int main()
{
	float i, j, val;
	int tmp, aux;

	for (i = 0, j = 1, val = 0, tmp = 0, aux = 0; i < 2.2; j++)
	{
		if(aux == 0){
			printf("I=%.0f J=%.0f\n", i, j);	
		}else{
			printf("I=%.1f J=%.1f\n", i, j);	
		}
		
		tmp++;

		if(tmp == 3){
			i += 0.2;
			val += 0.2;
			j = val;
			tmp = 0;
			aux++;
		}

		if(aux == 5)
			aux = 0;
	}

	return 0;
}