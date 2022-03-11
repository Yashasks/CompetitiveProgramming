// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
int bubbleSort(int arr[], int n)
{
    int i, j;
    int c=0;
    for (i = 0; i < n-1; i++)   
    
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]), c++;
    return c;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {4, 9, 8, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int r=bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    cout<<r;
    return 0;
}

// This code is contributed by rathbhupendra
