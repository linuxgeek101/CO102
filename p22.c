#include <stdio.h>
#include <string.h>
int main()
{
    char str1[256]="\0", str2[256]="\0";
    char str3[512]="\0";
    printf("Please enter the first string: ");
    fgets(str1, 256, stdin);
    int len1 = strlen(str1)-1;
    printf("Please enter the second string: ");
    fgets(str2, 256, stdin);
    int len2 = strlen(str2)-1;
    for(int i = 0; i < len1; i++)
    {
      str3[i] = str1[i];
    }
    for(int j = 0; j < len2; j++)
    {
        str3[len1+j]=str2[j];
    }
    str3[len1+len2] = '\0'; 
    printf("Strings concatenated. Result: %s\n", str3);
}
