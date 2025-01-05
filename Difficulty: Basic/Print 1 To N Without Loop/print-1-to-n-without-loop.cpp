//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // Complete this function
    void printNosHelper(int count, int n) {
        if (count > n) {
            return;  // Base case: stop recursion when count exceeds n
        }
        cout << count << " ";  // Print the current number
        printNosHelper(count + 1, n);  // Recursive call with incremented count
    }

    void printNos(int n) {
        printNosHelper(1, n);  // Start printing from 1
    }
};


//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends