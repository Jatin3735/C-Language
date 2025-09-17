#include<stdio.h>
int main(){
	int n,first,last,temp;
	printf("Enter any number : ");
	scanf("%d",&n);
	temp = n;
	last = n%10;
	while(n>=10){
		n/=10;
	}
	first = n;
	printf("First digit is => %d\n",first);
	printf("Last digit is => %d\n",last);
}
