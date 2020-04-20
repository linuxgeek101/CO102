#include<stdio.h>
void main()
{
    int a1[3][3], a2[3][3], a3[3][3];

    printf("Enter the first array:- \n");

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a1[i][j]);

    printf("Enter the second array:- \n");

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a2[i][j]);

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            a3[i][j] = a1[i][j] + a2[i][j];
    
    printf("Sum of the two array=\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d ",a3[i][j]);
        printf("\n");
    }
}