#include<stdio.h>
#include<ctype.h>

void main()
{
    int vow_count=0;
    char str[50]="\0";
    printf("Enter the sentence: ");
    gets(str);
    tolower(str);
    for(int i=0; str[i]!='\0';i++)
            if(tolower(str[i])=='a'||tolower(str[i])=='e'||tolower(str[i])=='i'||tolower(str[i])=='o'||tolower(str[i])=='u')
                vow_count++;    
    printf("Number of vowels: %d",vow_count);
}