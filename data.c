#include<stdio.h>
//int main(){
//	char name[15],roll[15];
//	int marks[5],i;
//	float per = 0.0;
//	printf("Enter your name : ");
//	scanf("%s",name);
//	printf("Enter your UID : ");
//	scanf("%s",roll);
//	printf("-----Enter marks details-----\n");
//	for(i=0;i<5;i++){
//		do{
//			printf("Entet M%d marks : ",i+1);
//			scanf("%d",&marks[i]);
//		}
//		while(marks[i]<0||marks[i]>100);
//		per+= marks[i];
//	}
//	per/=5.0;
//	printf("-----Your Deatils-----\n");
//	printf("Name : %s\n",name);
//	printf("UID : %s\n",roll);
//	printf("You Scored : %.2f %%\n",per);
//	if(per>=33.00){
//		printf("Status : Passed");
//	}
//	else{
//		printf("Status : Failed");
//	}
//}


int main(){
	char name[15],roll[15];
	int m1,m2,m3,m4,m5;
	float per = 0.0;
	printf("Enter your name : ");
	scanf("%s",&name);
	printf("Enter your UID : ");
	scanf("%s",&roll);
	printf("-----Enter marks Details-----");
	printf("\nM1 Marks : ");
	scanf("%d",&m1); 
	printf("M2 Marks : ");
	scanf("%d",&m2);
	printf("M3 Marks : ");
	scanf("%d",&m3);
	printf("M4 Marks : ");
	scanf("%d",&m4);
	printf("M5 Marks : ");
	scanf("%d",&m5);
	per = (m1+m2+m3+m4+m5)/5.0;
	printf("-----Your Details-----\n");
	printf("Name : %s\n",name);
	printf("UID : %s\n",roll);
	printf("You Scored : %.2f %%",per);
}
