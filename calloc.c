#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, sum=0;
    printf("\nENTER THE SIZE-->");
    scanf("%d", &a);
    int *ptr = (int*)calloc(a, sizeof(int));
    if(ptr == NULL){
        printf("ENTER PROPER VALUE");
        
    }
    printf("\nENTER THE ELEMENTS-->");
    for(int i = 0; i<a; ++i){
        scanf("%d", (ptr+i));
        sum += *(ptr+i);
    }
    printf("\nTHE SUM IS = %d", sum);
    free(ptr);
    return 0;
}