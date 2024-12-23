#include<stdio.h>
void tong(int*ptr,int*ptr1,int*n){
	*n=*ptr+*ptr1;
}
int main(){
int a=10;
int b=56;
int kq;
tong(&a,&b,&kq);
printf("ket qua:%d",kq);
return 0;
}

