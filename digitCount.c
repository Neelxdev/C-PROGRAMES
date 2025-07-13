#include<stdio.h>
int main(){
    int n, i=0, count = 0;
    printf("ENTER A NUMBER-->");
    scanf("%d", &n);
    if(n == 0){
        count = 1;
    }else{
    while(n != 0){
        n = n%10;
        count++;
    }
}
    printf("%d", count);

    return 0;
}