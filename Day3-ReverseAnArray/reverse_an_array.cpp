//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        
        // size of given array
        int n  = arr.size();
        
        // a temporary array to store the reversed array
        vector<int> temp(n);
        
        // storing reversed array in temp array
        for(int i = 0; i < n; i++)
        {
            temp[i] = arr[n - i - 1];
        }
        
        // replacing data into original array from temporary array 
        for(int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
       
        
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends