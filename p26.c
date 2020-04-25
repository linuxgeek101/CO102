#include <stdio.h>
int main()
{
    int a1[3][3], a2[3][3], a3[3][3];

    printf("Enter the first 3 X 3 matrix:- \n");

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a1[i][j]);

    printf("Enter the second 3 X 3 matrix:- \n");

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a2[i][j]);

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            a3[i][j] = a1[i][j] + a2[i][j];
    
    printf("Sum of the two matrices=\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d ",a3[i][j]);
        printf("\n");
    }
}
