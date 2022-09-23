//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50];
    char Char_occur;
    int i,count=0;
    printf("Enter string:\n");
    fgets(str,50,stdin);
    strlwr(str);
    printf("Enter character to print its occurrence in given string:\n");
    scanf("%c",&Char_occur);
    for(i=0;str[i];i++)
    {
        if(Char_occur == str[i])
           count++;
    }
    printf("Occurrence of %c is %d",Char_occur,count);
    getch();
    return 0;
}