#include <stdio.h>
#include <complex.h>
#include <math.h>


long long fib(long long a);

int main(void){
    printf("%lld", fib(50));
    return 0;
}

long long fib(long long a){
    if(a<2)return a;
    return fib(a-2) + fib(a-1);
}
