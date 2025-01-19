//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int i = 0;

        // If the array is already sorted with no rotation
        if (arr[0] < arr[n - 1]) return 0;

        // Iterate to find the rotation point
        while (i < n - 1 && arr[i] <= arr[i + 1]) {
            i++;
        }

        // The rotation index is the point where arr[i] > arr[i + 1]
        return i + 1;  // +1 because the rotation count is the index of the smallest element
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends