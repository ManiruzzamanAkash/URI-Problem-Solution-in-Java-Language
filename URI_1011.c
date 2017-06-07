#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main ()
{
    float r;
    while (scanf("%f",&r) != EOF)
    {
        printf("VOLUME = %.3f\n",(4/3.0)*pi*(r*r*r));
 
    }
    return 0;
 
}
