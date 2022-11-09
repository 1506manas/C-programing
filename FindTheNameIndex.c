#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int l, i, j;

    printf("Enter first string: ");
    scanf("%s",str1);

    int len=strlen(str1);

    printf("Enter second string: ");
    scanf("%s",str2);

    int len1=strlen(str2);

    
    for (i = 0, j=0; i<len, j<len1; i++)
    {
            if (str1[i] == str2[j])
            {
                j++;
            }
            else
            {
                j = 0;
            }
    }

    if (j == len1)
    {
        printf("Substring strat at position %d\n", i - j);
        printf("Substring end at position %d", i - 1);
    }
    
    return 0;
}