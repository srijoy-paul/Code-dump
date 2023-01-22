#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[] = {3, 3, 3, 4, 4, 4, 4, 13, 13, 13, 20, 40};
  int freq = 1, i;
  int n = sizeof(arr) / sizeof(arr[0]);
  for (i = 1; i < n;) {
    while (i < n && arr[i - 1] == arr[i]) {
      freq++;
      i++;
    }
    cout << "Frequency of " << arr[i - 1] << " is " << freq << "." << endl;
    freq = 1; // reset
    i++;
  }
  if (n == 1 || arr[n - 1] != arr[n - 2]) {
    cout << "Frequency of " << arr[n - 1] << " is 1.";
  }
}