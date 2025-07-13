#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    puts("ENTER A STRING");
    gets(str);
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    puts("THE NEW STRING-->");
    puts(str);
    return 0;

}