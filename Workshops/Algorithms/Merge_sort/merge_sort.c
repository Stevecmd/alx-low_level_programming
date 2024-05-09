#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);

int main()
{
    /* Initialize array and length */
    int array[] = {9, 4, 1, 3, 6, 7, 8, 2, 5}; 
    int length = 9;
    int i;

    /* Call merge_sort function */
    merge_sort(array, length);

    /* Print sorted array */
    for (i = 0; i < length; i++) 
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}

void merge_sort(int a[], int length)
{
    merge_sort_recursion(a, 0, length - 1);
}

void merge_sort_recursion(int a[], int l, int r)
{
    /* Check if the array has more than one element */
    if (l < r)
    {
        /* Find the middle index */
        int m = l + (r - l) / 2;

        /* Recursively sort the left and right halves */
        merge_sort_recursion(a, l, m);
        merge_sort_recursion(a, m + 1, r);

        /* Merge the sorted halves */
        merge_sorted_arrays(a, l, m, r);
    }
}

void merge_sorted_arrays(int a[], int l, int m, int r)
{
    int k = l; /* Index for merged array */
    int left_length = m - l + 1; /* Length of left subarray */
    int right_length = r - m; /* Length of right subarray */

    /* Allocate memory for temporary arrays */
    int *temp_left = malloc(left_length * sizeof(int));
    int *temp_right = malloc(right_length * sizeof(int));

    int i, j;

    /* Copy data to temp arrays */
    for (i = 0; i < left_length; i++)
        temp_left[i] = a[l + i];
    for (j = 0; j < right_length; j++)
        temp_right[j] = a[m + 1 + j];

    i = 0;
    j = 0;

    /* Merge the temp arrays back into a[] */
    while (i < left_length && j < right_length)
    {
        if (temp_left[i] <= temp_right[j])
        {
            a[k] = temp_left[i];
            i++;
        }
        else
        {
            a[k] = temp_right[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of temp_left, if any */
    while (i < left_length)
    {
        a[k] = temp_left[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of temp_right, if any */
    while (j < right_length)
    {
        a[k] = temp_right[j];
        j++;
        k++;
    }

    /* Free dynamically allocated memory */
    free(temp_left);
    free(temp_right);
}