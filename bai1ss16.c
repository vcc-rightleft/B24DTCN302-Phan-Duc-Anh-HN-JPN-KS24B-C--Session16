#include<stdio.h>
int main(){
int a=10;
int *ptr=&a;
printf("Gia tri cua a: %d",*ptr);
printf("\nDia chi cua a: %d",ptr);
printf("\nGia tri cua a: %d",a);
printf("\nDia chi cua a: %d",&a);
return 0;
}

