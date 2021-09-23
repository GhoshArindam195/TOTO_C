#include<stdio.h>
#include<string.h>
void main()
{
    char str1[]="Toto";
    char str2[]="Gopal";
    char str3[]="Das";

    strcat(strcat(str1, str2), str3);
    // printf("%s\n",);
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s\n",str3);
}