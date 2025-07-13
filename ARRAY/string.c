#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("ENTER STRING NAME-->");//printf("ENTER STRING NAME-->");
    gets(str);//scanf("%s", &str);
    puts("YOUR NAME IS-->");//printf("YOUR NAME IS-->%s", str);
    puts(str);
    int len = strlen(str);
    printf("%d\n", len);
    
    puts(strrev(str));

    return 0;
}