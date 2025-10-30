#include <stdio.h>
int main() {
    char str1[20]="Hello",str2[20]="world";
    int ii=0,i;
    for(i=0;str1[i]!='\0';i++){
        ii++;
    }
    for(i=0;str2[i]!='\0';i++){
        str1[ii]=str2[i];
        ii++;
    }
    str1[ii]='\0';
    printf("%s",str1);
    return 0;
}
