#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i,sum=0,rem,num;
    scanf("%d", &n);
    num=n;
    if(n>=10000 && n<=99999){
        while (n>0) {
            rem=n%10;
            sum+=rem;
            n/=10;
        }
    }
    printf("%d",sum);
    return 0;
}
