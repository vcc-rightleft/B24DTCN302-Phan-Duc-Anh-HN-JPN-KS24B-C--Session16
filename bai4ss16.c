#include<stdio.h>
void mang(int *ptr,int size){
	for(int i=0;i<size;i++){
		printf("prt[%d]=%d\n",i,*(ptr+i));
	}
}
int main(){
int a[]={6,7,9,12,3};
int size=sizeof(a)/sizeof(a[0]);
mang(a, size);
return 0;
}

