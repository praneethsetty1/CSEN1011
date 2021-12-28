#include<stdio.h>
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a,b;
	printf("value of a:",a);
	scanf("%d",&a);
	printf("value of b:",b);
	scanf("%d",&a);
	swap(&a,&b);
	printf("a=%d b=%d",a,b);
}
