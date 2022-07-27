#include<stdio.h>

//Function to swap numbers
int swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    return 0;
}
