/* Sorts an array of integers using the Quicksort algorithm. */

#include <stdio.h>

#define N 10

// Function prototypes
void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    // Start the quicksort process on the entire array (from index 0 to N-1)
    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for (i = 0; i < N; i++)
    {
        // Added a space here so the numbers don't print as one giant integer
        printf("%d ", a[i]); 
    }
    printf("\n");

    return 0;
}

// The recursive sorting function
void quicksort(int a[], int low, int high)
{
    int middle;

    // Base case: If the section of the array has 1 or 0 elements, 
    // it cannot be split further and is already sorted.
    if (low >= high)
    {
        return;
    }

    // Partition the array and find the final resting index of the "pivot" element
    middle = split(a, low, high);

    // Recursively sort the sub-array to the left of the pivot
    quicksort(a, low, middle - 1);

    // Recursively sort the sub-array to the right of the pivot
    quicksort(a, middle + 1, high);
}

// The partition function (the core of Quicksort)
int split(int a[], int low, int high)
{
    // Choose the first element as the pivot. 
    // We save its value, which conceptually leaves an empty "hole" at index 'low'.
    int part_element = a[low];

    // Loop until the 'low' and 'high' pointers meet in the middle
    while (low < high)
    {
        // STEP 1: Look for an element smaller than the pivot from the RIGHT side.
        // We move the 'high' pointer backwards as long as elements are >= the pivot.
        while (low < high && a[high] >= part_element)
        {
            high--;
        }
        
        // Once we find a smaller element, we move it to the "hole" on the left side.
        // Now, the "hole" has moved to the right side (at index 'high').
        a[low] = a[high];

        // STEP 2: Look for an element larger than the pivot from the LEFT side.
        // We move the 'low' pointer forwards as long as elements are <= the pivot.
        while (low < high && a[low] <= part_element)
        {
            low++;
        }
        
        // Once we find a larger element, we move it to the "hole" on the right side.
        // The "hole" has now moved back to the left side (at index 'low').
        a[high] = a[low];
    }

    // When the loop ends, 'low' and 'high' are equal. They have met at the final, 
    // correct position for our pivot. We drop the saved pivot value into this final "hole".
    a[low] = part_element;
    
    // Return the index of the pivot so quicksort knows where to split the next sub-arrays.
    return low;
}