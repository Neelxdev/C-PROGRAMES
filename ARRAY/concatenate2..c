#include<stdio.h>
#include<string.h>
void main(){
    char str1[100], str2[100];
    printf("ENTER STRING 1-->");;
    scanf("%s", &str1);
    puts("ENTER STRING 2-->");
    gets(str2);
    int i =0;
    int j = 0;
    while(str1[i] != '\0') i++;
    while(str2[j] != '\0'){
        str1[i++] = str2[j++];
    }
    str1[i] == '\0';
    printf("\nTHE CONCATENTED STRING IS-->%s", str1);

}