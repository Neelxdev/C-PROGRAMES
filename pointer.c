#include<stdio.h>
int main(){
    int b = 50;
    int *ptr;// or int *ptr = &b;
    ptr = &b;
    int **ptr2;// pointer to pointer
    ptr2 = &ptr;
    printf("PRINT THE ADDRESS %u", &b);
    printf("\nADDRESS %u", ptr);
    printf("\nADDRESS %u", ptr2);// ptr and ptr2 has different address
    printf("\nPRINT THE VALUE %d", *ptr);
    printf("\nPRINT THE VALUE %d", **ptr2);
    printf("\n%d", *ptr2);
    printf("\n%d", ptr-*ptr2);
    return 0;
}