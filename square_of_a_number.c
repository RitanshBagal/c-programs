#include <stdio.h>
#include <math.h>

int squareof(int a){
    int x = pow(a,2);
    return x;
}

int main(int argc, char const *argv[]){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("%d",squareof(a));
}