//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
  
    // Function to find the floor of k
    int getfloor(int k, int low, int high, vector<int> &arr) {
        while (low <= high) {
            int mid = (low + high) / 2;  // Recalculate mid in each iteration

            if (arr[mid] > k) {
                high = mid - 1;  // Move left
            } 
            else if (arr[mid] < k) {
                low = mid + 1;  // Move right
            } 
            else {
                return arr[mid];  // Exact match found
            }
        }

        // If no floor found, return the largest element <= k
        return (high >= 0) ? arr[high] : -1;
    }
    
    // Function to find the ceil of k
    int getceil(int k, int low, int high, vector<int> &arr) {
        while (low <= high) {
            int mid = (low + high) / 2;  // Recalculate mid in each iteration

            if (arr[mid] > k) {
                high = mid - 1;  // Move left
            } 
            else if (arr[mid] < k) {
                low = mid + 1;  // Move right
            } 
            else {
                return arr[mid];  // Exact match found
            }
        }

        // If no ceil found, return the smallest element >= k
        return (low < arr.size()) ? arr[low] : -1;
    }
    
    // Main function to return both floor and ceil
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
         sort(arr.begin(), arr.end());
        vector<int> v = {-1, -1};  // Initialize the vector with -1
        
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        
        // Get the floor and ceil of x
        v[0] = getfloor(x, low, high, arr);  
        v[1] = getceil(x, low, high, arr);  
        
        return v;  // Return the vector containing floor and ceil
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends