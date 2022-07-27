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

void insert(int a[], int n) /* function to sort an aay with insertion sort */  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}

//Function Definition for Selection Sort
void Selection( int n,int a[])
{
    int i, j, position;


    for (i = 0; i < n-1; i++)
    {
        // Finding the index of min element in unsorted part
        position = i;
        for (j = i+1; j < n; j++)
          if (a[j] < a[position])
            position = j;

        // Swap the found minimum element with the first element of unsorted part
        swap(&a[position], &a[i]);

    }
}
