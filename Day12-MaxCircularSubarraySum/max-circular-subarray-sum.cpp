//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
      int prefixSum = 0, maxSum = INT_MIN, sum = 0, minSum = INT_MAX;
        int allNegativeMax = INT_MIN;

        for (int i : arr) {
            prefixSum += i;
            allNegativeMax = max(allNegativeMax, i);
        }

        // Case: If all elements are negative
        if (allNegativeMax < 0)
            return allNegativeMax;

        // Calculate maximum subarray sum 
        sum = 0;
        for (int i : arr) {
            sum += i;
            maxSum = max(maxSum, sum);
            sum = max(sum, 0);
        }

        // Calculate minimum subarray sum
        sum = 0;
        for (int i : arr) {
            sum += i;
            minSum = min(minSum, sum);
            sum = min(sum, 0);
        }

        // Max circular sum is either normal max or wrapped max
        int circularMaxSum = prefixSum - minSum;
        return max(maxSum, circularMaxSum);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends