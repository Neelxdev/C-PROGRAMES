#include<stdio.h>
int main(){
    int a, b, button;
    printf("ENTER THE FIRST NUMBER-->");
    scanf("%d", &a);
    printf("ENTER THE SECOND NUMBER-->");
    scanf("%d", &b);
    printf("ENTER THE BUTTON-->");
    scanf("%d", &button);
    switch(button){
        case 1:
        printf("THE SUM = %d", a+b);
        break ;
        case 2:
        printf("THE DIFFERENCE = %d", a-b);
        break ;
        case 3:
        printf("THE PRODUCT = %d", a*b);
        break ;
        case 4:
        printf("THE DIVISION = %d", a/b);
        break ;
        
    }


    return 0;

    
}