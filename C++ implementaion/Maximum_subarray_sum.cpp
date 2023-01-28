//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    vector<int> findSubarray(int a[], int n)
    {
        // code here
        vector<int> res;
        vector<int> temp;
        int maxSum = a[0], res = a[0];
        res.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if ((maxSum + a[i]) > arr[i])
                ;
            temp.push_back(a[i]);
        }
    }
};

//{ Driver Code Starts.

void printAns(vector<int> &ans)
{
    for (auto &x : ans)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends