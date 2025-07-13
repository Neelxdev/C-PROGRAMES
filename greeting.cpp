#include<stdio.h>
int main(){
int button ; 
printf("ENTER THE PATH-->") ;
scanf("%d", &button);
switch(button){
    case 1:
        printf("HELLO.");
        break ; 
    case 2:
        printf("NAMASTAY");
        break ;
     case 3:
        printf("BONJOUR");
        break ;   
}

    return 0 ;
}