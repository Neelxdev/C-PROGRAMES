#include<stdio.h>
int main(){
    int num ;
    printf("ENTER A NUMBER-->");
    scanf("%d", &num);
    printf("\nTHE FACTORIAL OF %d is =", num);
    if(num == 0){
        num = 1;
    }else{
    for(int i = num-1; i>=1; i--){
        num*=i;
    }
}
    printf(" %d", num);
   
    return 0;
}