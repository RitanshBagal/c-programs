#include <stdio.h>
int main(int argc, char const *argv[])
{
    char st;
    printf("ENTER: ");
    scanf("%s",&st);

    if(st>='A' && st<='Z'){
        printf("UPPER CASE");
    }
    else if(st>='a' && st<='z'){
        printf("lower case");
    }
    else {
        printf("not an alphabet");
    }
    return 0;
}
// FOR A SINGLE ALPHABET OR CHARACTER INSTEAD OF "%S" DO "%C"
