#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);//recursive value
    }
}

int main(){
    int num;
    printf("ENTER A NUMBER-->");
    scanf("%d", &num);
    if(num<0){
        printf("THERE IS NO VALUE");

    }else{
        printf("THE FACTORIAL IS = %d", factorial(num));
    }
    return 0;
}