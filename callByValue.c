#include<stdio.h>
int add(int a, int b){
    return (a+b);
}

int main(){
    int x, y;
    printf("ENTER THE NUMBERS-->");
    scanf("%d%d", &x, &y);
    int result = add(x, y);
    printf("THE RESULT IS = %d", result);
    return 0;
}