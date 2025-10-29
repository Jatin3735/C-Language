#include<stdio.h>
struct book{
	char title[20],author[20];
	float price;
	int pages;
};
int main(){
	int i;
	struct book s[3];
	printf("Enter book details : \n");
	for(i=0;i<3;i++){
		printf("\nBook %d : \n",i+1);
		printf("Title : ");
		scanf("%s",s[i].title);
		printf("Author : ");
		scanf("%s",s[i].author);
		printf("Price : ");
		scanf("%f",&s[i].price);
		printf("Pages : ");
		scanf("%d",&s[i].pages);
	}	
	printf("\nS.No.\tTitle\tAuthor\tPrice\t\tPages\n");
	for(i=0;i<3;i++){
		printf("%d\t%s\t%s\t%.2fRs.\t%d\n",i+1,s[i].title,s[i].author,s[i].price,s[i].pages);
	}
}
