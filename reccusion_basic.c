#include <stdio.h>
void printHW(int count){
    if(count==0){
        return;
   }
    printf("HELLO WORLD\n");
    printHW(count-1);}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNM1 = sum(n-1);
    int sumN = sumNM1+n;
}

int main(int argc, char const *argv[]){
    printHW(5);

    int a = sum(100);
    printf("%d",a);
    return 0;
}
