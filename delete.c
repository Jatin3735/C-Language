// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[5],i,p,n;
    printf("enter size ");
    scanf("%d",&n);
    printf("enter elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are : \n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    
    printf("Enter postion you want to delete (0-based) : ");
    scanf("%d",&p);
    if(p<=n-1){
        for(i=p;i<n-1;i++){
            a[i] = a[i+1];
        }
        n--;
        printf("Array After deletion \n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    }
    else{
        printf("Provide valid position");
    }
    

    return 0;
}
