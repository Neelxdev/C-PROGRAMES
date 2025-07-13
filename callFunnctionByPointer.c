#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int a, b;
    printf("ENTER THE NUMBERS-->");
    scanf("%d%d", &a, &b);
    int (*ptr)(int, int);
    ptr = sum;
    int opt1 = ptr(a, b);
    int opt2 = sum(a, b);
    printf("\nFUNCTION CALLED BY POINTER-->%d", opt1);
    printf("\nDIRECT FUNCTION CALL-->%d", opt2);

    return 0;
}