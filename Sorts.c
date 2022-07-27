#include<stdio.h>

//Function to swap numbers
int swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    return 0;
}

//Function Definiton for Bubble Sort
void Bubble(int n,int a[])
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)

            if (a[j] > a[j + 1])
            {
                //Algorithm for swapping two numbers
                a[j]=a[j] - a[j+1];
                a[j + 1]=a[j] + a[j + 1];
                a[j]=a[j+1] - a[j];

            }
}
