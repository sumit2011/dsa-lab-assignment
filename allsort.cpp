/* Sorting in this code is   1. Bubble Sort   2. Insertion Sort   3. Selection Sort */
#include <stdio.h>
int arr1[] = {12, 6, 47, 65, 38, 24, 98, 75, 82, 13, 44, 37}; // global array Decleration for all the sorting Algorithum

// 1. Bubble sort
void BubbleSort(int *arr, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 2. Insertion sort
void InsertionSort(int *arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        int value = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = value;
    }
}

// 3. Selection sort
void SelectionSort(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

// 4. Quick Sort with partition code
int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    int value = arr[low];
    arr[low] = arr[j];
    arr[j] = value;

    return j;
}

void QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(arr, low, high);
        QuickSort(arr, low, partitionIndex - 1);
        QuickSort(arr, partitionIndex + 1, high);
    }
}

// 5. Merge Sort

// For Displaying the sorted array or unsorted also
void Display(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    printf("Array before sorted is -->   ");
    Display(arr1, 12);
    printf("\nArray after sorted is -->   ");
    // 1. BubbleSort(arr1,12);  		output is -->  6 12 13 24 37 38 44 47 65 75 82 98
    // 2. InsertionSort(arr1,12);    output is -->  6 12 13 24 37 38 44 47 65 75 82 98
    // 3. SelectionSort(arr1,12);  	output is -->  6 12 13 24 37 38 44 47 65 75 82 98
    Display(arr1, 12);

    return 0;
}