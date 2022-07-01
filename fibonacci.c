#include <stdio.h>
int fib(int n){
    if(n==0 || n==1){
        if(n == 0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
    int fibNM1 = fib(n-1);
    int fibNM2 = fib(n-2);
    int fibN = fibNM1 + fibNM2;
    printf("fib of %d is %d\n",n,fibN);
    return fibN;
}
int main(int argc, char const *argv[]){
    fib(6);// for the fibonacci series.
    printf("the nth term of entered fibonacci is %d\n",fib(6));// the nth term of series.
    return 0;
}
