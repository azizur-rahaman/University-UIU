#include<stdio.h>

int main(){

    // STEP-1: Declare  Two String variables
    char str[100], sub[100];

    // First String input
    printf("First string: ");
    gets(str);

    // Second String input
    printf("Second string: ");
    gets(sub);

    // STEP-2: Counter veriable to count occurence of sub string in the main string
    int count = 0;

    // STEP-3: Loop through the main string
    for(int i = 0; str[i] != '\0'; i++){

        // STEP-4: Check if the first character of sub string is found in the main string
        if(str[i] == sub[0]){

            
            int flag = 1; // Flag to check if the sub string is found or not

            
            for(int j = i+1; sub[j] != '\0'; j++){  // Loop through the sub string
                
                if(str[i+j] != sub[j]){  // Check if the sub string is found or not
                    
                    flag = 0; // If not found, set the flag to 0
                    break; // Break the loop
                }
            }
            if(flag == 1){ // If the sub string is found
                count++; // Increment the counter
            }
        }
    }

    // STEP-5: Print the occurence of the sub string
    printf("%d\n", count); 
    return 0;
}