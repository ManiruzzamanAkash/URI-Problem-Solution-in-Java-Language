#include <stdio.h>
#include <math.h>

double foo(int x, int n2, int at) {
    double d;

    if(at == 3) {
        return (double)x/(double)(x + n2);
    }else{
        d = 1.0 - (6 - at)/6.0, d = (1 - d)/d;
        return (1.0 - pow(d, x))/(1.0 - pow(d, x + n2));
    }
}

int main(int argc, char const *argv[]) {
    int ev1, ev2, at, d, tmp;
    double p;

    while(scanf("%d%d%d%d", &ev1, &ev2, &at, &d) && (ev1 || ev2 || at || d)){
        tmp = ev1, ev1 = 0;

        while(tmp > 0){ tmp -= d, ev1++; }
        tmp = ev2, ev2 = 0;
        while(tmp > 0){ tmp -= d, ev2++; }

        p = foo(ev1, ev2, at);
        printf("%.1f\n", p * 100);
    }

    return 0;
}