#include<stdio.h>

int main(){

FILE *file;

file = fopen("input.txt", "a");

if(file == NULL){
    printf("File not found");
}

char name[] = "Aziz";
int age = 20;

// fscanf(file, "%s %d", &name, &age);
fprintf(file, "\n%s %d", name, age);

}