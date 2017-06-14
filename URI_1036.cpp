#include<stdio.h>

int main()
{
 float n;
 scanf("%f", &n);  //take value from the user

 if(n < 0 || n > 100){
  printf("Fora de intervalo\n");
 }else{
  if(n >= 0 && n <= 25){
   printf("Intervalo [0,25]\n");
  }else if(n > 25 && n <= 50){
   printf("Intervalo (25,50]\n");
  }else if(n > 50 && n <= 75){
   printf("Intervalo (50,75]\n");
  }else{
   printf("Intervalo (75,100]\n");
  }
 }

 return 0;
}
