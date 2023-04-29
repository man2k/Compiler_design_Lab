#include <stdio.h>

int main()
{
    char c;
    FILE *file;
    file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    while ((c = getc(file)) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            printf("%c is a delimiter\n", c);
        }
        // printf("%c \n", c);
    }
    fclose(file);
    return 0;
}