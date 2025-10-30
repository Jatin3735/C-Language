#include<stdio.h>
#include<string.h>
int main(){
	char s1[20] = "hello123@4#7jangraA";
	int ac=0,nc=0,sc=0,i;
	for(i=0;s1[i]!='\0';i++){
	    if((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z')){
	        ac++;
	    }
	    else if(s1[i]>='0' && s1[i]<='9'){
	        nc++;
	    }
	    else{
	        sc++;
	    }
	}
	printf("alpha count => %d\n",ac);
	printf("numeric count => %d\n",nc);
	printf("special symobol count => %d",sc);
}
