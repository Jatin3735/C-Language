#include<stdio.h>
int main(){
	float l,b,r,a,r_s,pi = 3.14;
	printf("-----For Rectangle-----\n");
	printf("Enter length and breadth of rectangle : ");
	scanf("%f%f",&l,&b);
	printf(" -> Area of Rectangle = %.2f\n",l*b);
	printf(" -> Perimeter of Rectangle = %.2f\n\n",2*(l+b));
	printf("-----For Circle-----\n");
	printf("Enter radius of circle : ");
	scanf("%f",&r);
	printf(" -> Area of Circle = %.2f\n",pi*r*r);
	printf(" -> Circumference of Circle = %.2f\n\n",2*pi*r);
	printf("-----For Cube-----\n");
	printf("Enter side of cube : ");
	scanf("%f",&a);
	printf(" -> Volume of Cube = %.2f\n\n",a*a*a);
	printf("-----For Sphere-----\n");
	printf("Enter radius of sphere = ");
	scanf("%f",&r_s);
	printf(" -> Volume of Sphere = %.2f\n",(4.0/3.0)*pi*r_s*r_s*r_s);
}

