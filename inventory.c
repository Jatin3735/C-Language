#include<stdio.h>
int main(){
	int i,s,j;
	int id[5] = {101,102,103,104,105};
	int price[5] = {6000,7000,8000,9000,2000};
	int stock[5] = {2,4,0,3,5};
	char name[5][20]={"jackets","jeans","shirts","shoes","sneakers"};
	printf("======Details======\n");
	printf("Sr.no.	ID			Products\n");
	for(i=0;i<5;i++){
		for(j=0;j<1;j++){
			printf("%d	%d			",i+1,id[i]);
		}
		printf("%s\n",name[i]);
	}
	printf("============================\n");
	printf("Enter id of product : ");
	scanf("%d",&s);
	printf("======informations======\n");;
	for(i=0;i<5;i++){
		if(id[i]==s){
			printf("ID => %d\n",id[i]);
			printf("name => %s\n",name[i]);
			printf("Price => Rs.%d\n",price[i]);
			printf("Stock => %d items left\n",stock[i]);
		}
	}
	printf("----------------------------\n");
	
}



