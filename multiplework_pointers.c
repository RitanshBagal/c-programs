#include <stdio.h>
void doWork(int a, int b, int *sum , int *prod , int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
int main(int argc, char const *argv[]){
    int a = 5,b = 4;
    int sum,prod,avg;
    doWork(a,b,&sum,&prod,&avg);
    printf("sum = %d, prod = %d avg = %d",sum,prod,avg);
    return 0;
}


