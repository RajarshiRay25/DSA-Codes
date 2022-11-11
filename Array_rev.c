#include<stdio.h>
int main(){
    int arr[100],arr_rev[100],i,lim;
    printf("ENTER LIMIT : ");
    scanf("%d",&lim);
    //input
    printf("ENTER ELEMENTS : \n");
    for(i=0;i<lim;i++){
        scanf("%d",&arr[i]);
    }
    //copy to rev array
    for(i=0;i<lim;i++){
        arr_rev[i] = arr[lim - i - 1];
    }
    //original array
    printf("ORIGINAL ARRAY : \n");
    for(i=0;i<lim;i++){
        printf("%d \t",arr[i]);
    }
    //reverse array
    printf("\nREVERSED ARRAY : \n");
    for(i=0;i<lim;i++){
        printf("%d \t",arr_rev[i]);
    }

    return 0;
}