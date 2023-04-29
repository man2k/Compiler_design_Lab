#include <stdio.h>

int main()
{
    char c;
    FILE *file;
    file = fopen("input.txt", "r");
    while ((c = getc(file)) != EOF)
    {
        if (c == ' ' || c == ',' || c == ';' || c == '\n')
        {
            printf("%c is a delimiter \n", c);
        }
    }
    fclose(file);
    return 0;
}