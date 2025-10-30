// Online C compiler to run C program online
#include <stdio.h>

int swap(int *p, int *q) {
    int c;
    c=*p;
    *p = *q;
    *q = c;
    printf("After Swapping : a = %d\tb = %d",*p,*q);
}

int main(){
    int a,b;
    int *p = &a , *q = &b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping : a = %d\tb = %d\n",a,b);
    swap(p,q);
}
