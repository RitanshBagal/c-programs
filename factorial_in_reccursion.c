#include <stdio.h>
int fact(int n){
    if(n ==0){
        return 1;
    }
    int factNM1 = fact(n-1);
    int factN = factNM1*n;
    return factN;
}
int main(int argc, char const *argv[]){
    printf("%d",fact(10));
    return 0;
}
