#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);
void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main()
{
    /* Array to be sorted */
    int a[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45};
    int length = 13;

    /* Declare loop variable */
    int i;

    /* Call quicksort function */
    quicksort(a, length);

    /* Print sorted array */
    for (i = 0; i < length; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

/* Function to swap two elements */
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort_recursion(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(array, low, high);
        quicksort_recursion(array, low, pivot_index - 1);
        quicksort_recursion(array, pivot_index + 1, high);
    }
}

int partition(int array[], int low, int high)
{
    int pivot_value;
    int i;
    int j;
    int pivot_index = low + (rand() % (high - low + 1));
    if (pivot_index != high)
        swap(&array[pivot_index], &array[high]);

    pivot_value = array[high];

    i = low;

    for (j = low; j < high; j++)
    {
        if (array[j] <= pivot_value)
        {
            swap(&array[i], &array[j]);
            i++;
        }
    }

    swap(&array[i], &array[high]);

    return i;
}

void quicksort(int array[], int length)
{
    quicksort_recursion(array, 0, length - 1);
}
