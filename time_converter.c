#include <stdio.h>
int main(){
    int sec,h,m,s;
    scanf("%d",&sec);
    h = sec/3600;
    m= (sec-(h*3600))/60;
    s = (sec-(h*3600)-m*60);

    printf("%dH",h);
    printf("%dM",m);
    printf("%dS",s);
    
    return 0;
}
