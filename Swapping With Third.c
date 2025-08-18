#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter value of a and b : ");
	scanf("%d%d",&a,&b);
	printf("-----Before Swapping-----\n");
	printf("a => %d\n",a);
	printf("b => %d\n",b);
	c=a;
	a=b;
	b=c;
	printf("-----After Swapping-----\n");
	printf("a => %d\n",a);
	printf("b => %d",b);
}

