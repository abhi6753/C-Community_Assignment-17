//5. Write a program to convert a given string into lowercase
#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    printf("Enter string:\n");
    fgets(str,50,stdin);
    printf("String in lowercase\n%s",strlwr(str));
    getch();
    return 0;
}