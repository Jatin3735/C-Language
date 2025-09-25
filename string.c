#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	int num,i,count=0;
//	printf("Enter first person name : ");
//	gets(a);
//	printf("Enter second person name : ");
//	gets(b);
//	if(strcmpi(a,b)==0){
//		printf("Both are same name ");
//	}
//	else{
//		printf("Name are not same");
//	}


	//copy of strings
//	printf("Enter first person name : ");
//	gets(a);
//	strcpy(b,a);
//	puts(b);


	//copy of string of given number
//	printf("Enter first person name : ");
//	gets(a);
//	strncpy(b,a,3);
//	puts(b);


	//find length of string
//	printf("Enter first person name : ");
//	gets(a);
//	printf("%d",strlen(a));
	
	
	//add two strings
//	printf("Enter first name : ");
//	gets(a);
//	printf("Enter last name : ");
//	gets(b);
//	puts(strcat(a,b));
	
	
	//add 3 letter of last namae
//	printf("Enter first name : ");
//	gets(a);
//	printf("Enter last name : ");
//	gets(b);
//	puts(strncat(a,b,3));

	
	
	//length of string without using strlen function
	printf("Enter string : ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	printf("%d",count);
	
	
	
	
}






