#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    int* ptr;
    // Testing malloc
    printf("Enter Limit : \n");
    scanf("%d",&n);
    ptr = (int* )malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        printf("Enter Values : \n");
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("Values at %d is : %d \n",i,ptr[i]);
    }
    // Testing calloc
    printf("Enter Limit : \n");
    scanf("%d",&n);
    ptr = (int* )calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter Values : \n");
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("Values at %d is : %d \n",i,ptr[i]);
    }
    // Testing realloc
    int m;
    printf("Enter New Size : ");
    scanf("%d",&m);
    ptr = (int* )realloc(ptr,m*sizeof(int));
        for(i=0;i<m;i++){
        printf("Enter Values : \n");
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<m;i++){
        printf("Values at %d is : %d \n",i,ptr[i]);
    }
    free(ptr);
    for(i=0;i<n;i++){
        printf("Enter Values : \n");
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("Values at %d is : %d \n",i,ptr[i]);
    }
    return 0;
}