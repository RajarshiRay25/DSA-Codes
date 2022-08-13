#include<stdio.h>

// display 
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void ascending_sort(int arr[],int n){
    // ascending sorting
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void descending_sort(int arr[],int n){
    // descending sorting
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
    int arr[100],i,j,temp,n;
    printf("ENTER ARRAY SIZE : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter elements : ");
        scanf("%d",&arr[i]);
    }
    printf("ORIGINAL ARRAY . \n");
    display(arr,n);

    // ascending sort 

    printf("ASCENDING SORT ARRAY : \n");
    ascending_sort(arr,n);
    display(arr,n);

    // descending sort
    
    printf("DESCENDING SORT ARRAY : \n");
    descending_sort(arr,n);
    display(arr,n);
    return 0;
}