#include <stdio.h>
void modifyArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
        //arr[i] = arr[i] * 2;
    }
}
void main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;

    modifyArray(ptr, 5);
    for (int i = 0; i < 5; i++)
    {
        //numbers[i] = numbers[i] + i;
        
        *(ptr+i) = *(ptr+i) + i;
        printf("%d ", *(ptr + i));
    }
}