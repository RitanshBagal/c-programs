#include <stdio.h>
int main(){
    int n,i,fact = 1;
    printf("ENTER AN INTEGER: ");
    scanf("%d",&n);



    if(n<0){
        printf("ERROR!\t FACTORIAL OF A NEGATIVE INTEGER DOES NOT EXIST.");
    }
    else{
        for(i = 1;i<=n;++i){
            fact*=i;
        }
        printf("THE FACTORIAL OF %d IS: %d",n,fact);
    }
    return 0;
}
