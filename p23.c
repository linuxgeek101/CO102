#include<stdio.h>
void main()
{
    char str1[50], str2[50];
    int i=0;
    printf("Enter first string (case sensitive): ");
    gets(str1);
    printf("Enter second string (case sensitive): ");
    gets(str2);
    printf("String comparison returned: ");
    for(int k=0;str1[k]!='\0' && str2[k]!='\0';k++)
    {
        if(str1[k]>str2[k])
            {
                printf("+1");
                i=1;
                break;
            }
        else if(str1[k]<str2[k])
            {
                printf("-1");
                i=1;
                break;
                
            }
    }
        if(i==0)
            printf("0");
}