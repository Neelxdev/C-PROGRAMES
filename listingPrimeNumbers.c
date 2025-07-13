#include<stdio.h>
int main(){
    int lower, upper, isPrime;
    printf("ENTER THE LOWER LIMIT-->");
    scanf("%d", &lower);
    printf("\nENTER THE UPPER LIMIT-->");
    scanf("%d", &upper);
    printf("\nTHE PRIME NUMBERS WITHIN %d AND %d ARE GIVEN BELOW-->\n", lower, upper);
    for(int i = lower; i<=upper; i++){
        if(i<2) continue;
        isPrime = 1;
        for(int j = 2; j*j<=i; j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d\n", i);
        }
        
    }
    return 0;
}