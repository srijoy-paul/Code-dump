#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 9};
    int len = 1, maxLen = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) ||
            (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            len++;
            maxLen = max(len, maxLen);
        }
        else
            len = 0;
    }
    cout << maxLen;
}