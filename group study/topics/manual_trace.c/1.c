#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50] = "Watermelon";
    char s2[50] = "United Kingdom";

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    printf("\n");

    strcat(s1, s2);
    printf("s1: %s\n", s1);

    printf("\n");

    strncat(s2, s1, 7);
    printf("s2: %s\n", s2);
    printf("\n");

    printf("\n");printf("\n");

    
    if (strcmp(s1, s2) > 0)
        strncpy(s1, s2, 4);
    else
        strncpy(s2, s1, 4);
    
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("\n");
    strcpy(s1, s2);
    printf("s1: %s\n", s1);
}