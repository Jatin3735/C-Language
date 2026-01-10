// Online C++ compiler to run C++ program online
#include <stdio.h>
int main()
{
    int n,i,max=0,j,t;
    printf("Enter array size : ");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(i=0;i<n;i++){
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Minimum is => %d\n",min);
    
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum is => %d\n",max);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]<arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("\nArray in sort : \n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("Array in reverse : \n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    
    for(i=0,j=0;i<n;i++,j++){
            arr2[j]=arr[i];
    }
    
    printf("Array again reverse with another array : \n");
    for(j=0;j<n;j++){
        printf("%d ",arr2[j]);
    }
}
