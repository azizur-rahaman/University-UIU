#include <stdio.h>

int str_length(char str[])
{
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        cnt += 1;
    }

    return cnt;
}

int find_substr(char *str1, char *str2)
{
    int len1 = str_length(str1);
    int len2 = str_length(str2);

    if (len1 > len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if (str1[i] == str2[0])
            {
                int flag = 1;

                for (int j = 1; j < len2; j++)
                {
                    if (str1[i + j] != str2[j])
                    {
                        flag = 0;
                        break;
                    }
                }

                if (flag == 1)
                {
                    return 1;
                }
            }
        }
    }else
    {

        for (int i = 0; i < len2; i++)
        {
            if (str1[i] == str2[0])
            {
                int flag = 1;

                for (int j = 1; j < len1; j++)
                {
                    if (str1[i + j] != str2[j])
                    {
                        flag = 0;
                        break;
                    }
                }

                if (flag == 1)
                {
                    return 1;
                }
            }
        }
    }

    return - 1;
}

int main()
{
    printf("%d\n", find_substr("madam", "adam"));
    return 0;
}