// second largest element in an array.
#include <iostream>
using namespace std;

int findLargestNum(int arr[], int n)
{
    int largestNum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largestNum)
            largestNum = arr[i];
    }
    return largestNum;
}

int findSecondLargestNum(int arr[], int n, int largestNum)
{
    int SMax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > SMax && arr[i] < largestNum)
        {
            SMax = arr[i];
        }
    }
    return SMax;
}

int main()
{
    int arr[] = {1, 34, 12, 3, 4, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largestNum = findLargestNum(arr, size);
    cout << findSecondLargestNum(arr, size, largestNum);
}