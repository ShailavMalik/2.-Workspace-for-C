// Write a program to read characters from the keyboard. Store lowercase letters in
// LOWER, uppercase letters in UPPER, and other characters in OTHER Files
#include <stdio.h>
#include <conio.h>

int main()
{
    char ch[30];
    printf("Enter the srting: ");
    gets(ch);

    FILE *lower, *upper, *other;
    lower = fopen("LOWER.txt", "w");
    upper = fopen("UPPER.txt", "w");
    other = fopen("OTHER.txt", "w");
    int i=0;
    while(ch[i] != '\0')
    {
        if(ch[i] >= 'a' && ch[i] <= 'z')
            fputc(ch[i], lower);
        else if(ch[i] >= 'A' && ch[i] <= 'Z')
            fputc(ch[i], upper);
        else
            fputc(ch[i], other);
        i++;
    }
    fclose(lower);
    fclose(upper);
    fclose(other);
    printf("Data stored in files successfully.");

    getch();
    return 0;
}