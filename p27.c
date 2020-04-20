#include<stdio.h>
void main()
{
    int a1[3][3], a2[3][3], a3[3][3]={0,0,0,0,0,0,0,0,0};

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
            for(int k=0; k<3; k++)
                a3[i][j] += a1[j][k] * a2[k][j];
    
    printf("Product of the two array=\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d ",a3[i][j]);
        printf("\n");
    }
}