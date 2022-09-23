//3. Write a program to count vowels in a given string
#include<stdio.h>
#include<conio.h>
#define MAX_LENGTH 50
int main()
{
    char str[MAX_LENGTH];
    int i,Vowel_count=0;
    printf("Enter String:\n");
    fgets(str,MAX_LENGTH,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'\
        ||str[i]=='o'||str[i]=='U'||str[i]=='u')
           Vowel_count++;
    }
    printf("Total vowel in this string is %d",Vowel_count);
    getch();
    return 0;
}