#include <stdio.h>
#include <string.h>

int main () {
    char s1[] = "madam";
    char s2[] = "Abdullah Khan";


    int i = 0 , j = 0 , len = 0;
    while (s1[i] != '\0'){
        i++;
        len++;
    }
    for(j = 0, i = len - 1; i >= 0 ; i--, j++){

        s2[j] = s1[i];
    }

    printf("s2 = %s\n", s2);

    int d = strcmp(s1, s2);
    if(d==0){
        printf("Stirng is palindrome");
    }
    else{
        printf("String is not palindrome");
    }

    return 0;
}