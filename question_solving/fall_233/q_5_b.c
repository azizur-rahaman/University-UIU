#include<stdio.h>

int main(){

    FILE *file;
    file = fopen("in.txt", "r");
    

    if(file == NULL){
        printf("File not found\n");
        return 0;
    }



    int maximum = -99999;
    int temp;

    while (fscanf(file,"%d", &temp) != EOF)
    {
        if(temp > maximum) {
            maximum = temp;
        }
    }
    
    fclose(file);

    FILE *file2;

    file2 = fopen("out.txt", "w");


    fprintf(file2,"%d\n", maximum);


}