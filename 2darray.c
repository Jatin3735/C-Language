#include<stdio.h>
int main(){
	int a[2][3],i,j,sum=0,n,even=0,odd=0;
	float  avg ;
	printf("Enter matrix elements : ");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix are : \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			sum+=a[i][j];
		}
	}
	printf("Sum  => %d\n",sum);
	avg =  sum/(i*j);
	printf("Average =>  %.2f \n",avg);
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(a[i][j]%2==0){
				even+=1;
			}
			else{
				odd+=1;
			}
		}
	}
	printf("Even numbers => %d\n",even);
	printf("Odd numbers => %d\n",odd);
	
	printf("Enter which number you search : ");
	scanf("%d",&n);
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(n==a[i][j]){
				printf("Your number %d placed at => a[%d][%d]",n,i,j);
			}
		}
	}
}

