#include<stdio.h>
#include<string.h>
struct book{
    char name[50];
    float price;
   
};
int main(){
    struct book b1;
    strcpy(b1.name, "MATHEMATICS");
    b1.price = 250;
    func(b1);
    return 0;
}
void func(struct book b1){
    printf("%s, \n%f", b1.name, b1.price);

}