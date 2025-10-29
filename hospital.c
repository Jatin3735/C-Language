#include<stdio.h>
int add(char name[]){
	int age,i,n;
	char disease[20],doctor[20];
	printf("How many patients : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("\nPatient %d : \n",i+1);
	printf("Enter patient Name : ");
	scanf("%s",name);
	printf("Age : ");
	scanf("%d",&age);
	printf("Disease : ");
	scanf("%s",disease);
	printf("Doctor to be assign : ");
	scanf("%s",doctor);
}
	printf("\n========Patient Added========\n");
	printf("S.No\tName\tAge\tDisease\tDoctor\n");
	for(i=0;i<n;i++){
	printf("%d\t%s\t%d\t%s\t%s\t\n",i+1,name,age,disease,doctor);
	}
}
int search(char name[]){
	int i;
	
}

int main(){
	char name[20];
	add(name);
	
}
