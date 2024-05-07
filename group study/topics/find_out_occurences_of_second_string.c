#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int count = 0;

    for (int i = 0; i < len1; i++)
    {

        if (tolower(str1[i]) == tolower(str2[0]))
        {
            int flag = 1;
            for (int j = 1; j < len2; j++)
            {
                if (tolower(str1[i + j]) != tolower(str2[j]))
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
            {
                count++;
            }
        }
    }

    printf("%d", count);
}