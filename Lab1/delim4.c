#include <stdio.h>

int main()
{
    char c;
    FILE *file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Error Opening File");
        return 1;
    }
    while ((c = getc(file)) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t' || c == ',' || c == ';' || c == '{' || c == '}' || c == '[' || c == ']' || c == '(' || c == ')')
        {
            printf("%c is a delimiter\n", c);
        }
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '>' || c == '<' || c == '!' || c == '%' || c == '=')
        {
            printf("%c is an operator\n", c);
        }
    }
    fclose(file);
    return 0;
}