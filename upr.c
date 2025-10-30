	//with inbuilt functions

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



	//without inbuilt function

int main(){
	char s1[20] = "hello jatin";
	int i,len;
	len = strlen(s1);
	for(i=0;i<len;i++){
	    if(s1[i]==' '){
	        continue;
	    }
	    else{
	        s1[i]-=32;     //('a'-'A')
	    }
	}
	printf("%s",s1);
}
