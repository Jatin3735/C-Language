#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char s1[20] = "hello jatin";
	int i,len;
	len = strlen(s1);
	for(i=0;i<len;i++){
		printf("%c",toupper(s1[i]));
		
	}
}

