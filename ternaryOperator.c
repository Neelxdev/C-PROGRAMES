#include<stdio.h>
int main(){
    int num;
    printf("ENTER A NUMBER-->");
    scanf("%d", &num);
    (num%2 == 0) ? printf("EVEN") : printf("ODD");
    // CONDITION ? PRINTING TRUE VALUE : PRINTING FALSE VALUE;
    return 0;
}