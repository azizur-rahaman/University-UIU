#include<stdio.h>

int main(){

    // Step-1: Declare a string and get string from user
    char str[100];

    printf("Enter a string: ");
    gets(str);

    // Step-2: Count the number of vowels in the string
    int a = 0, e = 0, I = 0, o = 0, u = 0;

    // to count the number of vowels in the string we need to traverse 
    // or access every element int the string
    // so we need a loop

    for(int i = 0; str[i] != '\0'; i++){

        
        if(str[i] == 'a' || str[i] == 'A'){ // check if the current character is a/A vowel
            a++;
        }else if(str[i] == 'e' || str[i] == 'E'){ // check if the current character is e/E vowel
            e++;
        }else if(str[i] == 'i' || str[i] == 'I'){ // check if the current character is i/I vowel
            I++;
        }else if(str[i] == 'o' || str[i] == 'O'){ // check if the current character is o/O vowel
            o++;
        }else if(str[i] == 'u' || str[i] == 'U'){  // check if the current character is u/U vowel
            u++;
        }

    }

    printf("\n");

    // Step-3: Print the resutl of counter veriable
    printf("A/a: %d\n", a);
    printf("E/e: %d\n", e);
    printf("I/i: %d\n", I);
    printf("O/o: %d\n", o);
    printf("U/u: %d\n", u);
}