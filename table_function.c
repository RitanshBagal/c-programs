#include <stdio.h>
void printTable(int n){
for(int i = 1;i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
}
}

int main(int argc, char const *argv[]){
    printf("print the table of ");
    int i,n;
    scanf("%d",&n);
    printTable(n);
    return 0;
}
