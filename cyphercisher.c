#include<stdio.h>
#include<ctype.h>
#include<string.h>
int cipherEncoding(char str[], int shift){
    str[100];
    for(int i = 0; str[i] != '\0'; i++){
        if(isalpha(str[i])){
            if(str[i]<'Z' && str[i]>'A'){
                str[i] = (str[i] -'A'+shift)%26 + 'A';
            }else{
                str[i] = (str[i] -'a'+shift)%26 + 'a'; 
            }

        }
    }
}
int main(){
    char name[100];
    gets(name);
    int shift;
    scanf("\n%d", &shift);
    cipherEncoding(name, shift);
    puts(name);

    return 0;
}