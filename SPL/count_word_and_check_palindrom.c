#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool ispal(char str[], int s, int end)
{
    while (s <= end)
    {
        if (str[s] != str[end])
        {   
            printf("%d %d\n", s, end);
            printf("%c  %c\n", str[s], str[end]);
            return false;
        }

        s++;
        end--;
    }

    return true;
}

int countWord(char str[])
{

    bool flag = true;
    int cnt = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (flag == true)
                cnt++,flag = false;
        }
        else flag = true;
    }

    return cnt;
}



int main()
{
    char str[100000];

    fgets(str, 100000, stdin);

    printf("%d\n", countWord(str));

    if(ispal(str, 0, strlen(str)-1))
        printf("YES\n");
    else printf("NO\n");
}