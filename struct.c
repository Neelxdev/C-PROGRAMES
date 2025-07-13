#include<stdio.h>
#include<string.h>
struct employee{
    char name[55];
    int id;
    float salary;

};
int main(){
    struct employee e1, e2;
    strcpy(e1.name, "SAYAN");
    e1.id = 1;
    e1.salary = 25000;
    strcpy( e2.name, "AMAN");
    e2.id = 2;
    e2.salary = 35000.50;
    printf("%s, %d, %f", e1.name,  e1.id, e1.salary);
    printf("\n%s, %d, %f", e2.name,  e2.id, e2.salary);
    return 0;
}