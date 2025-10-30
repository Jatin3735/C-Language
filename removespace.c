#include<stdio.h>
#include<string.h>
int main(){
	char s1[20] = "hello jatin";
	int i,j=0;
	for(i=0;s1[i]!='\0';i++){
	    if(s1[i]!=' ' && s1[i]!='\0'){
	        s1[j]=s1[i];
	        j++;
	    }
	}
	s1[j]='\0';
	printf("%s",s1);
}
