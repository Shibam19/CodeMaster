#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}



int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }

    return -1;
}



int main()
{
    
   int n = 100000; 
    int arr[n];

   
    for (int i = 0; i < n; i++)
    {
       arr[i] = rand() % 1000;
   }

    int x = 444; 
    clock_t start, end;
    double time_taken;
    int iterations;

    
    start = clock();
    iterations = 0;
    int result = linearSearch(arr, n, x);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (result != -1)
    {
        printf("Number found by linear search at index %d.\n", result);
        printf("Time taken by linear search: %f seconds.\n", time_taken);
        printf("Number of iterations by linear search: %d.\n", iterations + 1);
    }
    else
    {
        printf("Number not found by linear search.\n");
        printf("Time taken by linear search: %f seconds.\n", time_taken);
    }

    start = clock();
    iterations = 0;
    int mid;
    int l = 0, r = (n - 1);

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            result = mid;
            iterations++;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        mid=l+(r-l)/2;
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

        if (result != -1)
        {
            printf("Number found by binary search at index %d.\n", result);
            printf("Time taken by binary search: %f seconds.\n", time_taken);
            printf("Number of iterations by binary search: %d.\n", iterations);
        }
        else
        {
            printf("Number not found by binary search.\n");
            printf("Time taken by binary search: %f seconds.\n", time_taken);
        }

        return 0;
    }
}