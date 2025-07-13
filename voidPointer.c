#include<stdio.h>
int main(){
    void *ptr;
    char a = 'X';
    ptr = &a;
    printf("%c", *(char*)ptr); /* printf("%c", *ptr);--> should not be used as void* is 
                                  not a pointer-to-object type*/
    
    return 0;
}