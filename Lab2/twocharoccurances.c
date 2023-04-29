#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Error opening input.txt");
        return 1;
    }
    char code[1000];
    char operatorList[18][3] = {
        "++", "--", "==", "+=", "-=", "!=", "*=", "||", "/=", "<<", ">>", "<=", ">=", "%=", "&=", "&&", "|=", "^="};
    int operatorCount[18] = {0};
    fread(code, 1000, 1, file);
    // printf("%d", strlen(code));
    fclose(file);
    for (int i = 0; i < strlen(code); i++)
    {
        for (int j = 0; j < 18; j++)
        {
            // printf("%c", operatorList[j][0]);
            if (operatorList[j][0] == code[i] && operatorList[j][1] == code[i + 1])
            {
                operatorCount[j]++;
            }
        }
    }
    for (int i = 0; i < 18; i++)
    {
        if (operatorCount[i] > 0)
        {
            printf("%s -> %d\n", operatorList[i], operatorCount[i]);
        }
    }
    return 0;
}