#include<stdio.h>
int main (){
    int num;
    int count = 0;
    printf("ENTER THE NUMBER-->");
    scanf("%d", &num);
    if(num==0){
        count = 1;
    }else{
        if(num<0){
            num =- num;
        }
        while(num != 0){
            num = num/10 ;
            count++;
        }
     
    }
    printf("THE DIGIT IN THE NUMBER = %d", count);

    return 0;
}