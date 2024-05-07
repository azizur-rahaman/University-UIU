#include<stdio.h>
int main(){

FILE *fptr;

fptr = fopen("test.txt","r");
char str[100];

while (fscanf(fptr, "%s", str) != EOF)
{
        puts(str);
}



}