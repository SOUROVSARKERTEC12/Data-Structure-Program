#include<stdio.h>
void main()
{
    int first,second,third;
    int matrix[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    printf("Entered matrix is : \n \n");
    for(first = 0; first < 5; first++)
    {
        for(second =0; second < 5; second++)
        {
            printf("%d\t",matrix[first][second]);
        }
        printf("\n");
    }

    printf("\nTridigonal martix:\n\n");
    printf("%d\t%d\n",matrix[0][0],matrix[0][1]);

    for(first = 1; first < 5; first++)
    {
        for(third = 1; third < first; third++)
        {
            printf("\t");
        }
        if(first == 4)
            printf("%d\t%d\n",matrix[4][3],matrix[4][4]);
        else
        {
            for(second = 1; second < 5; second++)
            {
                if(first == second)
                    printf("%d\t%d\t%d",matrix[first][second - 1],matrix[first][second],matrix[first][second+1]);
            }
            printf("\n");
        }
    }
}
