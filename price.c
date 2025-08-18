#include<stdio.h>
#include<stdlib.h>
int main(){
	int p1,p2,q1,q2,tc,tq,pr;
	float ppi = 0.0;
	scanf("%d%d",&p1,&p2);
	scanf("%d%d", &q1, &q2);
	tc = (p1*q1)+(p2*q2);
	tq = q1+q2;
	ppi = (float)tc/tq;
	pr = tc%tq;
	
	printf("%d\n",p1+p2);
	printf("%d\n",abs(p1-p2));
	printf("%d\n",tc);
	printf("%.1f\n",ppi);
	printf("%d",pr);

}
