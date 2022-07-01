#include <stdio.h>

float convertTemp(float celsius){
    float far = celsius*(9.0/5.0)+32;
    return far;
}
int main(int argc, char const *argv[]){
    float far = convertTemp(37);
    printf("%f",far);
    return 0;
}
