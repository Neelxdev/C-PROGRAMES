#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b, *ptr;
    printf("\nENTER THE SIZE-->");
    scanf("%d", &a);
    ptr = (int*)malloc(a*sizeof(int));
    
    printf("\nBEFORE REALLOCATION-->");
    for(int i = 0; i<a; ++i){
        printf("%d,", (ptr+i));
        
    }
    printf("\nENTER THE NEW SIZE-->");
    scanf("%d", &b);
    ptr = (int*)realloc(ptr , b);
    printf("\nAFTER REALLOCATION-->");
    for(int i = 0; i<b; ++i){
        printf("%d,", (ptr+i));
        
    }

    free(ptr);
    return 0;
}