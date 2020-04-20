#include<stdio.h>
void main()
{
    int input;
    char str[50];
    printf("Enter the string: ");
    gets(str);
    printf("Please choose an option:-\n1: Convert to lowercase.\n2: Convert to uppercase.\n->");
    scanf("%d",&input);
    if(input==1)
    {
        for(int i=0; str[i]!='\0';i++)
        {
            if(str[i]<=90&&str[i]>=65)
                str[i]=str[i]+32;
        }
        printf("Converted string: %s",str);
    }
    else if (input==2)
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]<=122&&str[i]>=97)
                str[i]=str[i]-32;            
        }
        printf("Converted string: %s",str);
    }
    else
        printf("Invalid input!");
}