//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        vector<int> ans;
        stack<int> st;
        int n = arr.size();
        
        // Traverse the array from right to left
        for (int i = n - 1; i >= 0; i--) {
            // Pop elements from the stack that are less than or equal to arr[i]
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }
            
            // If the stack is empty, the next greater element is -1
            if (st.empty()) {
                ans.push_back(-1);
            } else {
                // The top of the stack is the next greater element
                ans.push_back(st.top());
            }
            
            // Push the current element onto the stack
            st.push(arr[i]);
        }
        
        // Since we've filled ans in reverse order, reverse it before returning
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after reading t
    while (t--) {
        vector<int> a;
        string input;

        // Reading the entire input line for the array
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.nextLargerElement(a);

        // Print the result in the required format
        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout << endl;        // Ensure new line after each test case output
        cout << "~" << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends