#include <stdio.h>

int main() {
    char arr[10000];
    gets(arr);

    
    for (int i = 0; arr[i] != '\0'; i++) {

        if (arr[i] == '.' ||  arr[i] == ' ' || arr[i] == 'A' || arr[i] == 'a' || arr[i] == 'E' || arr[i] == 'e' || arr[i] == 'I' || arr[i] == 'i' || arr[i] == 'O' || arr[i] == 'o' || arr[i] == 'U' || arr[i] == 'u') {
            continue;
        } else {
            if (arr[i] == 'Z' || arr[i] == 'z') {
                arr[i] = arr[i] - 25;
            }else {
                arr[i] = arr[i] + 1;
            }
        }
    }

    printf("%s", arr);
    return 0;
}
