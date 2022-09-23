//4. Write a program to convert a given string into uppercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter string:\n");
    fgets(str,50,stdin);
    printf("String in upper case:\n%s",strupr(str));
    getch();
    return 0;
}