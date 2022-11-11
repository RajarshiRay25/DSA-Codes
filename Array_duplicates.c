#include <stdio.h>

int main()
{
    int Arr_1[100], Arr_1_copy[100], Arr_1_Reverse[100];
    int i, j, elemCount, count = 0;
    int readIndex, writeIndex, scanIndex, new_count;

    printf("ENTER ARRAY ELEMENTS : \n");
    scanf("%d", &elemCount);
    printf("Enter %d numbers\n", elemCount);

    // Read array elements
    for (i = 0; i < elemCount; i++)
    {
        scanf("%d", &Arr_1[i]);
    }

    // Duplicate Elem Read
    for (i = 0; i < elemCount; i++)
    {
        for (j = i + 1; j < elemCount; j++)
        {
            if (Arr_1[i] == Arr_1[j])
            {
                count++;
                break;
            }
        }
    }
    printf("NUMBER OF DUPLICATE ELEMENTS : \n : %d\n", count);

    // Copy Array

    for (i = 0; i < elemCount; i++)
    {
        Arr_1_copy[i] = Arr_1[i];
    }

    printf("ARRAY COPY SUCCESSFUL! \n");

    // Array Display without duplicates

    for (readIndex = 0, writeIndex = 0; readIndex < elemCount; readIndex++)
    {
        for (scanIndex = readIndex + 1; scanIndex < elemCount; scanIndex++)
        {
            if (Arr_1_copy[scanIndex] == Arr_1_copy[readIndex])  // Detect Duplicate Element
            {
                break;
            }
        }
        if (scanIndex == elemCount)
        {
            Arr_1_copy[writeIndex] = Arr_1_copy[readIndex];
            writeIndex++;
        }
    }

    // Print unique elements

    printf("LIST FOR NON DUPLICATES : \n");
    for (new_count = 0; new_count < writeIndex; new_count++)
    {
        printf("%d  ", Arr_1_copy[new_count]);
    }

    // Print Unique Array In Reverse

    for (i = 0; i < new_count; i++)
    {
        Arr_1_Reverse[i] = Arr_1_copy[new_count - i - 1];
    }

    //reverse array
    printf("\nREVERSED UNIQUE ARRAY : \n");
    for(i=0;i<new_count;i++){
        printf("%d \t",Arr_1_Reverse[i]);
    }

    return 0;
}