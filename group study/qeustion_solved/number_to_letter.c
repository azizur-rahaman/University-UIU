#include <stdio.h>
#include <string.h>

void toSpelledOut(int number, char *str)
{
    switch (number)
    {
    case 0:
        strcpy(str, "zero");
        break;
    case 1:
        strcpy(str, "one");
        break;
    case 2:
        strcpy(str, "two");
        break;
    case 3:
        strcpy(str, "three");
        break;
    case 4:
        strcpy(str, "four");
        break;
    case 5:
        strcpy(str, "five");
        break;
    case 6:
        strcpy(str, "six");
        break;
    case 7:
        strcpy(str, "seven");
        break;
    case 8:
        strcpy(str, "eight");
        break;
    case 9:
        strcpy(str, "nine");
        break;
    }
}

void upperCase(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main()
{
    char numbers[100];
    int k;

    fgets(numbers, 100, stdin);         
    numbers[strcspn(numbers, "\n")] = '\0';
    scanf("%d", &k);

    for (int i = 0; i < strlen(numbers); i++)
    {
        int num = numbers[i] - '0';
        char str[10];
        toSpelledOut(num, str);

        if (k == 1)
        {
            upperCase(str);
        }

        printf("%s ", str);
    }

    return 0;
}
