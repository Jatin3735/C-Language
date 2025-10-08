#include<stdio.h>
#include<string.h>
int main(){
	char email[100];
	int i,a_pos=-1,dot_pos = -1,len;
	int a_count = 0;
	printf("Enter email : ");
	scanf("%s",&email);
	
	len = strlen(email);
	
	for(i=0;i<len;i++){
		if(email[i]=='@'){
			a_count++;
			a_pos = i;
		}
	}
	
	if(a_count!=1){
		printf("invalid email : must contain only one '@'\n");
		return 1;
	}
	
	
	if(a_pos ==0 || a_pos== len-1){
		printf("Invalid email : '@' cannot be first or last digit.\n");
		return 1;
	}
	
	for(i=0;i<a_pos;i++){
		if(!isalnum(email[i]) && email[i]!='.' && email[i]!='_'){
			printf("Invalid characters %c before '@'\n",email[i]);
			return 1;
		}
	}
	
	
	for(i=a_pos+1;i<len;i++){
		if(email[i]=='.'){
			dot_pos = i;
		}
	}
	
	if(dot_pos==-1 || dot_pos == len-1 || dot_pos == a_pos+1){
		printf("Invalid email : '.' must appear after '@' and not at end\n");
		return 1;
	}
	
	if(strcmp(email[dot_pos],".com")!=0 ||
	strcmp(email[dot_pos],".org")!=0 ||
	strcmp(email[dot_pos],".edu")!=0 ||
	strcmp(email[dot_pos],".net")!=0){
		printf("Ivalid domain : Domain will be .org , .com , .edu, .net\n");
		return 1;
	}
	else{
	
	printf("Valid Email\n");
	return 0;
}
}
