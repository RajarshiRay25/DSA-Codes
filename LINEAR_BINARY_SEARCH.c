#include<stdio.h>
//display array

void display(int arr[],int limit){
    printf("ARRAY IS : \n");
    for(int i=0;i<limit;i++){
        printf("%d \n",arr[i]);
    }
}
// Linear Search

int linear_search(int arr[],int limit,int num){
    for(int i=0;i<limit;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
// Binary Search

int binary_search(int arr[],int limit,int num){
    int low,mid,high;
    low = 0;
    high = limit-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == num){    // element found at middle index
            return mid;
        }
        if(arr[mid]<num){       // shorten array resetting low value
            low = mid+1;
        }
        else{                   // shorten array resetting high value
            high = mid-1;
        }
    }
    return -1;

}
int main(){
    int arr[100],num,index,limit;

    printf("Enter Limit : \n");
    scanf("%d",&limit);
    for(int i=0;i<limit;i++){
        printf("ENTER ELEMENTS : ");
        scanf("%d",&arr[i]);
    }
    display(arr,limit);

    // Linear Search
    printf("Enter Number To Search : ");
    scanf("%d",&num);
    int search_pos_linear = linear_search(arr,limit,num);
    display(arr,limit);
    printf("%d Found at %d index.\n",num,search_pos_linear);

    // Binary Search
    printf("Enter Number To Search : ");
    scanf("%d",&num);
    int search_pos_binary = binary_search(arr,limit,num);
    display(arr,limit);
    printf("%d Found at %d index.\n",num,search_pos_binary);

    return 0;
}