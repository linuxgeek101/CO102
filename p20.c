#include <stdio.h>
#include <ctype.h>

int main()
{
    int vow_count=0;
    char str[256]="\0";
    printf("Enter the sentence: ");
    fgets(str, 256, stdin);
    tolower(*str);
    for(int i=0; str[i]!='\0';i++)
            if(tolower(str[i])=='a'||tolower(str[i])=='e'||tolower(str[i])=='i'||tolower(str[i])=='o'||tolower(str[i])=='u')
                vow_count++;    
    printf("Number of vowels: %d\n",vow_count);
}
