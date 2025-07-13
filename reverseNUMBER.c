#include<stdio.h>
int main(){
    int a, rem, reverse = 0;
    printf("ENTER A NUMBER-->");
    scanf("%d", &a);
    while(a != 0){
        rem = a%10;
        reverse = reverse*10+rem;
        a/=10;
    }
    printf("\nTHE REVERSE NUMBER IS-->%d", reverse);
    return 0;
}