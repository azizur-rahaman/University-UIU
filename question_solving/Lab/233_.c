#include <stdio.h>
#include <math.h>

// STEP - a: this function will return 1 if the number is prime, 0 otherwise
int is_prime(int x) {
    if (x <= 1) return 0; 
    for (int i = 2; i < x; i++) { 
        if (x % i == 0) return 0;
    }
    return 1;
}

// STEP - b: this function will reverse the number using recursion

int rev = 0, base_pos = 1;

int reverse_number(int x) {
    
    if (x > 0) {
        reverse_number(x / 10);
        rev += (x % 10) * base_pos;
        base_pos *= 10;
    }
    
    return rev;
}

// STEP - c: this function will return 1 if the number is palindromic prime, 0 otherwise
int is_palindromic_prime(int x) {
    if (is_prime(x) && x == reverse_number(x)) {
        return 1;
    }
    return 0;
}

// STEP - d: this function will print all the palindromic prime numbers within the range [start, end]
void find_superhero_palindromic_primes(int start, int end) {
    printf("Palindromic prime numbers within the range %d to %d are: \n", start, end);
    for (int i = start; i <= end; i++) {
        rev = 0;
        base_pos = 1;

        reverse_number(0);
        if (is_palindromic_prime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int lower, upper;
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    find_superhero_palindromic_primes(lower, upper);
    
    return 0;
}
