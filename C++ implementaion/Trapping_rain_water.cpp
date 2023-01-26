//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        //   long long int res=0;
        //   int lMax,rMax;
        //   for(int i=1;i<n-1;i++){
        //       lMax=arr[i];
        //       for(int j=0;j<i;j++) lMax=max(lMax,arr[j]);
        //       rMax=arr[i];
        //       for(int j=i+1;j<n;j++) rMax=max(rMax,arr[j]);
        //       res+=((min(lMax,rMax))-arr[i]);
        //   }
        //   return res;
        long long int res = 0;
        int lMax[n], rMax[n];
        lMax[0] = arr[0];
        for (int i = 1; i < n; i++)
            lMax[i] = max(lMax[i - 1], arr[i]);

        rMax[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
            rMax[i] = max(arr[i], rMax[i + 1]);

        for (int i = 1; i < n - 1; i++)
        {
            res += (min(lMax[i], rMax[i]) - arr[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;

        int a[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends