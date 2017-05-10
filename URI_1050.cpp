#include <cstdio>

int main()
{
	int a;

	scanf("%i", &a);

	if(a == 61){
		printf("Brasilia\n");
	}else if(a == 71){
		printf("Salvador\n");
	}else if(a == 11){
		printf("Sao Paulo\n");
	}else if(a == 21){
		printf("Rio de Janeiro\n");
	}else if(a == 32){
		printf("Juiz de Fora\n");
	}else if(a == 19){
		printf("Campinas\n");
	}else if(a == 27){
		printf("Vitoria\n");
	}else if(a == 31){
		printf("Belo Horizonte\n");
	}else{
		printf("DDD nao cadastrado\n");
	}

	return 0;
}