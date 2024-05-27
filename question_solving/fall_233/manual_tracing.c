#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "CSE-1111 SPL";
    char str2[50] = "I am a UIUian";
    
    printf("STEP-1: \n");
    printf("%s\n", str1); 
    printf("%s\n", str2);
    printf("\n");


    printf("STEP-2: \n");
    int i = strlen(str1) * 0.5 - 2;
    printf("%d\n", i);
    printf("\n");

    printf("STEP-3 For Loop: \n");
    for (int m = 0; i + m < strlen(str1); m += 3)
    {   
        str1[i + m] = str2[m];
        printf("m: %d, str1 = %s\n", m, str1);
    }
    printf("\n");

    printf("STEP-4: \n");
    strcat(str1, str2);
    printf("%s\n", str1);
    printf("\n");

    printf("STEP-5: \n");
    if (strcmp(str2, str1) > 0)
    {
        strncat(str1, "CSE is awesome.", 6);
    }
    else
    {
        strncat(str2, "CSE is awesome.", 6);
    }
    printf("%s\n", str1);
    
    return 0;
}