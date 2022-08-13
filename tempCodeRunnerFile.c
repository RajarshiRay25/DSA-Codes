    printf("Enter Number To Search : ");
    scanf("%d",&num);
    int search_pos_linear = linear_search(arr,limit,num);
    display(arr,limit);
    printf("%d Found at %d index.\n",num,search_pos_linear);