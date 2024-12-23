#include<stdio.h>
void doi(int*ptr, int*ptr1){
	int n=*ptr;
	*ptr=*ptr1;
	*ptr1=n;
}
int main(){
int a=10;
int b=20;
printf("gia tri ban dau: ");
printf("\na=%d,b=%d",a,b);
doi(&a,&b);
printf("\ngia tri khi doi: ");
printf("\na=%d,b=%d",a,b);
return 0;
}

