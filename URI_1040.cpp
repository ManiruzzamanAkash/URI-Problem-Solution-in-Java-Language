#include <cstdio>

#define SC1(a) scanf("%f", &a)
#define SC4(a, b, c, d) scanf("%f %f %f %f", &a, &b, &c, &d)

using namespace std;

int main(int argc, char const *argv[])
{
	float a, b, c, d, m, f;

	SC4(a, b, c, d);
	a = (a * 20)/100;
	b = (b * 30)/100;
	c = (c * 40)/100;
	d = (d * 10)/100;
	m = a + b + c + d;

	if(m >= 7.0){
		printf("Media: %.1f\nAluno aprovado.\n", m);
	}else if(m < 5.0){
		printf("Media: %.1f\nAluno reprovado.\n", m);
	}else{
		SC1(f);
		printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\n", m, f);
		if ((m + f) / 2 < 5.0) printf("Aluno reprovado.\nMedia final: %.1f\n", (m + f) / 2);
		else printf("Aluno aprovado.\nMedia final: %.1f\n", (m + f) / 2);
	}

	return 0;
}