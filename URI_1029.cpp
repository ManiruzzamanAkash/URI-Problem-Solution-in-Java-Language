#include <cstdio>
using namespace std;
 
int counter, call;
 
int fib(int n)
{
    if(n == 0){
            call++;
            return 0;
    }else if(n == 1){
            call++;
            counter++;
            return 1;
    }else{
            call++;
            return fib(n - 1) + fib(n - 2);
    }
}
 
int main()
{
    int n, x, res;
    scanf("%d", &n);
 
    for (int i = 0; i < n; ++i)
    {
        counter = 0;
        call = 0;
        scanf("%d", &x);
        res = fib(x);
        printf("fib(%d) = %d calls = %d\n", x, call - 1, counter);
    }
 
        return 0;
}